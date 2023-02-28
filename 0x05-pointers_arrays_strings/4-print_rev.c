#include <stdio.h>

/**
 * print_rev - Print a string in reverse followed by a newline
 *
 * @s : Pointer to the first character of the string
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
