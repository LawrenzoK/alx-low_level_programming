#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: pointer to string to search
 * @needle: pointer to substring to find
 *
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
