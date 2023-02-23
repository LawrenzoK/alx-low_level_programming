#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *
 * Return: void
 */

void print_line(void)
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
