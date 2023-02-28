#include <stdio.h>

/**
 * rev_string - Reverse a string
 *
 * @s: Pointer to the first character of the string
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	i = 0;
	j--;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		j++;
		j--;
	}
}
