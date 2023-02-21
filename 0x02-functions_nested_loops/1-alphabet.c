#include "main.h"
#include <stdio.h>

/**
 * main - print the alphabets in lowercases
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');

	return (0);
}
