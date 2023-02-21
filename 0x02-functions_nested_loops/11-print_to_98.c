#include "main.h"

/**
 * print_number - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		print_char('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
		print_char((n % 10) + '0');
	}
}

/**
 * print_char - prints all natural numbers from n to 98
 * @c: starting number
 *
 * Return: void
 */
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				print_char(',');
				print_char(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			if (i != 98)
			{
				print_char(',');
				print_char(' ');
			}
		}
	}
	print_char('\n');
}
