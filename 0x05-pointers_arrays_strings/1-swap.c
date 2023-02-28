#include "main.h"

/**
 *
 * swap_int: swap two integers
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
