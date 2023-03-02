#include <string.h>
#include "main.h"

/**
 * _strncpy - string copy
 *@dest: destination to return
 *@src: source
 *@n: number
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
