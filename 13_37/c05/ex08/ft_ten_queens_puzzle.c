#include <unistd.h>


int is_safe(int **matrix, int col, int row, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		if (matrix[i][col] == 1)
			return 0;
		i++;
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (matrix[i][j] == 1)
			return 0;
		i--;
		j--;
	}
	i = row;
	j = col;
	while (i < n && j >= 0)
	{
		if (matrix[i][j] == 1)
			return 0;
		i++;
		j--;
	}
	return (1);
}

int handle_chess(int **matrix, int col, int row, int n)
{
	if (is_safe(**matrix, col, row, n))
	{

}

void chess_board(int **matrix, int n)
{
	int i;
	int col;
	int row;
	i = 0;
	*matrix = n * n;
	while (*matrix[i] < n)
	{
		*matrix[i] = 0;
		i++;
	}
	handle_chess(**matrix, col, row, n);
}

int ft_ten_queens_puzzle(void)
{
	int **matrix;
	int n;
	int *arr;
	int i;
	i = 0;
	chess_board(**matrix, n);
	while (*matrix[i] < n)
	{
		if (*matrix[i] == 1)
			arr++;
		i++;
	}
	return (arr);
}
