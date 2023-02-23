#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *@n: number of times character _ is printed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
