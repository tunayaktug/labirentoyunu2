#  Maze Solver in C++

This is a console-based maze-solving application written in **C++**, using **recursive backtracking** to navigate a 10x10 maze grid. The goal is to find a valid path from the **top-left (0,0)** to the **bottom-right (9,9)** cell.

##  Maze Representation

The maze is defined as a 2D array:

- `0` → Open path  
- `1` → Wall  
- `2` → Visited cell during the search

```cpp
int lbrnt[10][10] = {
    {0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
    ...
    {1, 1, 1, 1, 0, 0, 0, 0, 0, 0}
};
```

##  How It Works
The yolArama(int x, int y) function explores all possible directions recursively (right, down, left, up).

The yolGecerliligi(int x, int y) function ensures that the next step is within bounds and on a valid path (0).

The visited path is marked as 2 to prevent infinite loops.

If the exit (9,9) is reached, the path is stored in the yol array and printed.

##  Key Concepts
Recursion and Backtracking

Depth-First Search (DFS)

2D array traversal

Path tracking with coordinate arrays

##  Sample Output
When a path is found:
```cpp
cikis yolu
x y
0 0
1 0
2 0
...
9 9
```
##  When no path is found:
```cpp
maalesef cikis yolu bulunamadi
```
## How to Compile & Run
Ensure you have a C++ compiler (e.g., g++).

Compile the program:
g++ maze_solver.cpp -o maze_solver

Run the program:
./maze_solver
