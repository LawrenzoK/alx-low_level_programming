#include "main.h"
#include <stdio.h>

/**
 * _putchar -Charater c to stdout
 * @c: Character c
 *
 * Return: Written charater
 * else return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
