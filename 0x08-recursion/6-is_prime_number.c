#include "main.h"

/**
 * is_prime_number_helper - helper function to check if a number is prime
 * @n: the number to check
 * @i: the current divisor to try
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number_helper(int n, int i)
{
	if (n < 2 || n % i == 0)
	{
		return (0);
	{
		else if (i * i > n)
		{
			return (1);
		}
	else
	{
		return (is_prime_number_helper(n, i + 1));
	}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_number_helper(n, 2));
}
