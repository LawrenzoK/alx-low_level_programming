#include "main.f"
#include <stddef.h>

/**
 * _strlen - Calculate string lenght
 *
 * @s: Pointer to the first character of the string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
