#include <stdio.h>

#define SIZE 9

// Prints the Sudoku board in a formatted 9x9 grid
void print_board(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (i % 3 == 0 && i != 0) {
            printf("- - - - - - - - - - - - \n");
        }
        for (int j = 0; j < SIZE; j++) {
            if (j % 3 == 0 && j != 0) {
                printf(" | ");
            }
            if (j == 8) {
                printf("%d\n", board[i][j]);
            } else {
                printf("%d ", board[i][j]);
            }
        }
    }
}

// Validates whether a number can be placed at a given position
// without violating Sudoku constraints
int is_valid(int board[SIZE][SIZE], int row, int col, int num) {
    // Enforce Sudoku row-uniqueness constraint
    for (int d = 0; d < SIZE; d++) {
        if (board[row][d] == num) {
            return 0; // Not valid
        }
    }

    // Enforce Sudoku column-uniqueness constraint
    for (int d = 0; d < SIZE; d++) {
        if (board[d][col] == num) {
            return 0; // Not valid
        }
    }

    // Enforce 3x3 subgrid constraint
    int box_start_row = row - row % 3;
    int box_start_col = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + box_start_row][j + box_start_col] == num) {
                return 0; // Not valid
            }
        }
    }

    return 1; // It is valid
}


// --- Main function for example usage ---
int main() {
    int board[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    printf("Initial board:\n");
    print_board(board);
}