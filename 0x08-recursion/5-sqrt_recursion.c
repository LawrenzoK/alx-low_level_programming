#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @n: integer number to find the square root
 * @i: integer to check square root of n
 * Return: integer, square root of n
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer number to find the square root
 * Return: integer, square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}

