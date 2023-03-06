#include "main.h"

/**
 * _memcpy - copy memory to destination
 *
 * @dest: destination pointer
 * @src: pointer
 * @n: number of byte
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
