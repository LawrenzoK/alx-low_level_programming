#include "main.h"

/**
 * print_diagonal - draw a diagonal line in the terminal
 *@n: number of times character _ is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
