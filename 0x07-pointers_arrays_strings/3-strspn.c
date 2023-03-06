#include <stdlib.h>
#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: pointer to string to search
 * @accept: pointer to string of acceptable characters
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*a == *s)
			{
				n++;
				break;
			}
			a++;
		}
		if (!*a)
		{
			return (n);
		}
		s++;
	}
	return (n);
}
