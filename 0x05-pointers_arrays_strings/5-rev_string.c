#include "main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: Pointer to the first character of the string
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
