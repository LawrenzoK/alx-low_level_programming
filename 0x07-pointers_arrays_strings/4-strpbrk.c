#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string
 * @s: pointer to string to search
 * @accept: pointer to string
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
