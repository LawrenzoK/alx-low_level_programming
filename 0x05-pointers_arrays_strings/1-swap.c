#include "main.h"

/**
 * swap_int - swap two integers
 * @a: pointer to integer
 * @b: pointer to integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
