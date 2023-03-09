#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locate character in string
 * @s: pointer to string to search
 * @c: character to search for
 *
 * Return: pointer to first occurrence
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
