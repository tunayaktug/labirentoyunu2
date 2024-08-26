#include <iostream>
#define BOYUT_X 10 // BOYUT_X adında bir makro tanımlar ve ona 10 değerini atar. Bu makro labirentin satır sayısını gösterir.
#define BOYUT_Y 10 // BOYUT_Y adında bir makro tanımlar ve ona 10 değerini atar. Bu makro labirentin sütun sayısını gösterir.
using namespace std;

// lbrnt adında 2 boyutlu dizi tanımlanır. Dizinin her elemanı, labirentin bir hücresidir.
// her hücre 0 veya 1 değeri ile doldurulur, 0'lar yolu ; 1'ler duvarları temsil eder.
int lbrnt[BOYUT_X][BOYUT_Y] = {
    {0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
    {1, 1, 0, 0, 0, 0, 0, 1, 1, 1},
    {1, 1, 0, 1, 1, 1, 0, 1, 1, 1},
    {1, 0, 0, 1, 0, 0, 0, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 0, 0, 0, 0, 0}};

int yol[101][2];  // gidilen yolu saklayacak dizi.
int yolIndex = 0; // gidilen yolun saklanması için index.
int yolArama(int x, int y);
int yolGecerliligi(int x, int y);

int main()
{
    if (yolArama(0, 0)) // labirentin başlangıç yani (0,0) noktasından yol bulmaya geçtiği durum.
    {
        // yolArama fonksiyonu bir yol bulursa koordinat çifti halinde yazar ve bu labirentteki yolu gösterir.
        cout << "cikis yolu" << endl;
        cout << "x y" << endl;
        for (int i = 0; i < yolIndex; i++)
        {
            cout << yol[i][0] << " " << yol[i][1] << endl;
        }
    }
    else // yolArama fonksiyonu yol bulamazsa bu yazdırılır.
    {
        cout << "maalesef cikis yolu bulunamadi" << endl;
    }

    return 0;
}

int yolGecerliligi(int x, int y) // bir x,y koordinatının labirentin içinde olup olmadığını ve konumun bir yol olup olmadığını kontrol eden fonksiyon.(true dönüyorsa koordinat geçerli bir yoldadır.)
{
    return x < BOYUT_X && x >= 0 && y < BOYUT_Y && y >= 0 && lbrnt[x][y] == 0;
}

int yolArama(int x, int y)
{
    if (y == BOYUT_Y - 1 && x == BOYUT_X - 1) // Labirentin son noktasına yani sağ alt köşesine ulaşıp ulaşmadığını kontrol eder.
    {
        // Eğer ulaşırsa yol dizisine eklenir.
        yol[yolIndex][0] = x;
        yol[yolIndex][1] = y;

        yolIndex++;
        return 1;
    }

    if (yolGecerliligi(x, y)) // x ve y koordinatlarının geçerli bir yol üzerinde olup olmadığını kontrol eder.
    {
        lbrnt[x][y] = 2; // Geçerli bir yol hücresi bu atamayla işaretlenir. Bu hücrenin daha önceden ziyaretini gösterir.
        // Yol dizisine eklenir.
        yol[yolIndex][0] = x;
        yol[yolIndex][1] = y;

        yolIndex++;

        // yolArama fonksiyonu yeniden çalıştırılır, komşu hücrelere doğru arama yapılır.
        if (yolArama(x + 1, y))
            return 1;
        if (yolArama(x, y + 1))
            return 1;
        if (yolArama(x - 1, y))
            return 1;
        if (yolArama(x, y - 1))
            return 1;

        // Arama başarısız olursa diğer bir deyişle çıkış yolu bulunamazsa yolIndex azaltılır.
        yolIndex--;

        lbrnt[x][y] = 0; // Bu atama ile birlikte işaretlenen hücre geri alınır.
    }

    return 0;
}
