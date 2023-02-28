#include <stdio.h>

/**
 * _puts - Print a string to the standard output
 *
 * @str:  Pointer to the first character
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
