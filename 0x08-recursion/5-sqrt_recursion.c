#include "main.h"

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
