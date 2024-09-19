#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// Function to check if a queen can be placed at matrix[row][col]
int is_safe(int **matrix, int row, int col, int n) 
{
    int i, j;

    // Check this column on the upper side
    i = 0;
    while (i < row) 
    {
        if (matrix[i][col] == 1)
            return 0;
        i++;
    }

    // Check the upper-left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0) 
    {
        if (matrix[i][j] == 1)
            return 0;
        i--;
        j--;
    }

    // Check the upper-right diagonal
    i = row;
    j = col;
    while (i >= 0 && j < n) 
    {
        if (matrix[i][j] == 1)
            return 0;
        i--;
        j++;
    }

    return 1;
}

// Function to recursively place queens on the board
int handle_chess(int **matrix, int row, int n, int *solution) 
{
    // If all queens are placed, print the solution
    if (row >= n) 
    {
        int i = 0;
        while (i < n) 
        {
            printf("%d", solution[i]);
            i++;
        }
	printf("\n");
        return 1; // Continue finding other solutions
    }

    // Try placing a queen in each column of the current row
    int col = 0;
    int found_solution = 0;
    while (col < n) 
    {
        if (is_safe(matrix, row, col, n)) 
        {
            matrix[row][col] = 1;   // Place the queen
            solution[row] = col;    // Save the column index for printing

            // Recur to place the rest of the queens
            found_solution = handle_chess(matrix, row + 1, n, solution) || found_solution;

            matrix[row][col] = 0;   // Backtrack and remove the queen
        }
        col++;
    }

    return found_solution;
}

// Initialize the chess board and start solving the puzzle
void chess_board(int **matrix, int n) 
{
    // Initialize matrix with zeros (no queens placed)
    int i = 0, j;
    while (i < n) 
    {
        j = 0;
        while (j < n) 
        {
            matrix[i][j] = 0;
            j++;
        }
        i++;
    }

    int *solution = (int *)malloc(n * sizeof(int)); // Array to store the solution
    handle_chess(matrix, 0, n, solution); // Start the recursion

    free(solution); // Free the solution array
}

int ft_ten_queens_puzzle(void) 
{
    int n = 4;

    // Allocate memory for the 2D chessboard array
    int **matrix = (int **)malloc(n * sizeof(int *));
    int i = 0;
    while (i < n) 
    {
        matrix[i] = (int *)malloc(n * sizeof(int));
        i++;
    }

    chess_board(matrix, n); // Solve the puzzle

    // Free the allocated memory
    i = 0;
    while (i < n) 
    {
        free(matrix[i]);
        i++;
    }
    free(matrix);

    return 0;
}

int main() 
{
    ft_ten_queens_puzzle();
    return 0;
}
