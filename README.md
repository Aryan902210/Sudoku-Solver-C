# Sudoku Solver Using Backtracking (C)

## OVERVIEW

This is a command-line Sudoku solver implemented in C, demonstrating the backtracking algorithm for constraint-based problem solving. The project solves standard 9x9 Sudoku puzzles by filling empty cells while respecting Sudoku rules (row, column, and 3x3 subgrid constraints).

This project highlights:

- Recursive problem solving

- Backtracking algorithm implementation

- Constraint checking

- Clean and readable C code


## FEATURES

- Solve any valid 9x9 Sudoku puzzle

- Implements backtracking to explore possible solutions

- Prints the puzzle in a well-formatted grid before and after solving

- Handles unsolvable puzzles gracefully


## FILE STRUCTURE

SudokuSolver/
│
├─ sudoku_solver.c      # Main source code
├─ README.md           # Project documentation


## HOW IT WORKS

1. The program uses a 2D array to represent the 9x9 Sudoku board.

2. The is_valid function ensures that any number inserted does not violate:

- Row constraints

- Column constraints

- 3x3 subgrid constraints

3. The solve_sudoku function:

- Finds the next empty cell

- Tries all candidate numbers (1–9)

- Recursively attempts to solve the puzzle

- Backtracks if a number leads to a dead end

4. The print_board function outputs the puzzle in a clear, readable format.


## EXAMPLE USAGE

Compile: 
```bash
gcc sudoku_solver.c -o sudoku
```

Run:
```bash
./sudoku
```

## EXAMPLE OUTPUT

Initial board:
5 3 0 | 0 7 0 | 0 0 0
6 0 0 | 1 9 5 | 0 0 0
0 9 8 | 0 0 0 | 0 6 0
- - - - - - - - - - - - 
8 0 0 | 0 6 0 | 0 0 3
4 0 0 | 8 0 3 | 0 0 1
7 0 0 | 0 2 0 | 0 0 6
- - - - - - - - - - - - 
0 6 0 | 0 0 0 | 2 8 0
0 0 0 | 4 1 9 | 0 0 5
0 0 0 | 0 8 0 | 0 7 9

Solving...

Solved board:
5 3 4 | 6 7 8 | 9 1 2
6 7 2 | 1 9 5 | 3 4 8
1 9 8 | 3 4 2 | 5 6 7
- - - - - - - - - - - - 
8 5 9 | 7 6 1 | 4 2 3
4 2 6 | 8 5 3 | 7 9 1
7 1 3 | 9 2 4 | 8 5 6
- - - - - - - - - - - - 
9 6 1 | 5 3 7 | 2 8 4
2 8 7 | 4 1 9 | 6 3 5
3 4 5 | 2 8 6 | 1 7 9


## SKILLS DEMONSTRATED

- C programming: arrays, functions, recursion

- Data Structures & Algorithms: backtracking, constraint checking

- Problem Solving: implementing a recursive solution for a combinatorial problem

- Code Documentation: clear inline comments and well-structured code


## FUTURE IMPROVEMENTS

- Add user input to solve custom puzzles

- Implement graphical interface (GUI)

- Optimize performance for very large or complex puzzles

- Add unit tests for validation logic
