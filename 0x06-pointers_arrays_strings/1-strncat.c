#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: the destination string to append
 * @src: the source string to append from
 * @n: the maximum number of characters to append from src
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest_start);
}
