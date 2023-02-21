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
}

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();

	return (0);
}
