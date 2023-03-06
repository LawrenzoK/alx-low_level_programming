#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: pointer to string to search
 * @accept: pointer to string
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (char *a = accept; *a; a++)
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
