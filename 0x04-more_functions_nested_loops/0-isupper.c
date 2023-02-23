#include "main.h"
/**
 * _isupper - Check for upper case character
 *
 * @c: the character to check
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

