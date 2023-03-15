#include "main.h"

/**
 * print_program_name - Entry point of the program
 *
 * @name: The number of command-line arguments passed
 *
 * Return: 0 on success
 */
void print_program_name(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
}
