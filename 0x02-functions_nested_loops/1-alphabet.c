#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print the alphabets in lowercases
 */
void print_alphabet(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');

	putchar('\n');

}
