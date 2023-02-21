#include <stdio.h>


/**
 * printPutchar() - prints a string using putchar
 *
 *This function prints a string to standard output using putchar.
 *The string consists of the characters '_', 'p', 'u', 't', 'c', 'h', 'a',
 *and 'r', followed by a newline character.
 *
 * Return: None
 */
void printPutchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
}


/**
 * main -Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	printPutchar();

	return (0);
}
