#include "main.h"

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
}
