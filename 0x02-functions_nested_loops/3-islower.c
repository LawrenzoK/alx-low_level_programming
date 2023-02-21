#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks for a lowercase character
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
void _islower(void)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
