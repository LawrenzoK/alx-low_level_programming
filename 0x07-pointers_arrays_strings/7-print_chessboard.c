#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - prints a chessboard
 * @a: the chessboard to print
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	char newline = '\n';

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			write(STDOUT_FILENO, &a[i][j], 1);
		}
		write(STDOUT_FILENO, &newline, 1);
	}
}
