# Maze Solver 🧩

This project contains an algorithm to find a way out of a maze. 🗺️  
The maze is represented as a 2D array where `0` indicates a path and `1` indicates a wall.  
The code uses the **Depth-First Search (DFS)** algorithm to find an exit path from the maze. 🧭

---

## 📋 Table of Contents
- Project Description 🚀  
- Usage Instructions 🛠️  
- How the Code Works 🧠  
- Developer Info 👨‍💻  

---

## 🚀 Project Description

This C++ program solves a maze of fixed size using the following steps:

1. **Maze Initialization**: A 10x10 maze is defined using a 2D array.
2. **Path Search**: A **Depth-First Search (DFS)** algorithm is applied to find a valid exit path.
3. **Result Output**: If a path is found, the program prints the coordinates of the path to the console.

---

## 🛠️ Usage Instructions

### 🔧 Compile the Code
Use a C++ compiler to build the program. Example using `g++`:

## 🧠 How the Code Works

### 🔷 Maze Representation  
The 2D array `lbrnt` represents the maze structure:
- `0`: open path  
- `1`: wall  

### 🔷 Validity Check  
The function `yolGecerliligi` checks whether a given cell is within bounds and not a wall or already visited.

### 🔷 Pathfinding  
The function `yolArama` uses the **Depth-First Search (DFS)** algorithm to explore possible routes from the start point to the exit.  
If a valid path is found, each step is stored in a path array.

### 🔷 Output  
Once a path is found, the coordinates of each step in the solution path are printed sequentially to the console.
