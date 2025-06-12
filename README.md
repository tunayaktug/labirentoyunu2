Labirent Çözümleme 🧩
Bu proje, bir labirentte çıkış yolunu bulmak için kullanılan bir algoritmayı içerir. 🗺️ Labirent, 0'lar (yol) ve 1'ler (duvarlar) ile temsil edilen bir 2D dizidir. Kod, derinlik öncelikli arama (DFS) algoritmasını kullanarak labirentten çıkış yolu bulur. 🧭

📋 İçindekiler
Proje Açıklaması
Kullanım Talimatları
Kodun Çalışma Prensibi
Geliştirici Bilgileri
Proje Açıklaması 🚀
Bu projede, sabit boyutlu bir labirentte çıkış yolunu bulmak için aşağıdaki adımları gerçekleştiren bir C++ programı bulunur:

Labirent Tanımlama: 10x10 boyutlarında bir labirent dizisi oluşturulur.
Yol Arama: Derinlik öncelikli arama algoritması kullanılarak labirent içinde çıkış yolu bulunur.
Sonuçların Yazdırılması: Eğer bir çıkış yolu bulunursa, koordinat çiftleri olarak ekrana yazdırılır.

Kullanım Talimatları 🛠️

Kodun Derlenmesi: Programı derlemek için uygun bir C++ derleyici kullanın. Örneğin, g++ ile:
g++ -o labirent labirent.cpp
Programın Çalıştırılması: Derlenen programı çalıştırarak labirentin çözüm yolunu görebilirsiniz:
./labirent
Kodun Çalışma Prensibi 🧠


Labirent Tanımı: lbrnt adlı 2D dizi, labirentin yapısını temsil eder. 0'lar geçiş yollarını, 1'ler ise duvarları ifade eder.
Yol Geçerliliği Kontrolü: yolGecerliligi fonksiyonu, bir hücrenin geçerli olup olmadığını kontrol eder.
Yol Arama: yolArama fonksiyonu, DFS algoritması kullanarak labirentteki çıkış yolunu arar ve bulursa yol dizisine ekler.
Geliştirici Bilgileri 👨‍💻
Geliştirici: Tunay Aktuğ
İletişim: https://www.linkedin.com/in/tunay-a-2b94b9250/
