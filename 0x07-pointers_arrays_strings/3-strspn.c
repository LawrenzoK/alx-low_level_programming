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
	unsigned int count = 0;

	while (*s != '\0' && *accept != '\0')
	{
		if (*s != *accept)
		{
			break;
		}
		count++;
		s++;
		accept++;
	}
	return (count);
}
