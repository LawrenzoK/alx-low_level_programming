#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the lowercase
 * alphabet ten times followed by a new line
 */
void print_alphabet_x10(void)
{
	char c;

	for (int i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
