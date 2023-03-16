#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory and terminate on failure
 * @size: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(uint32_t size)
{
	void *ptr;

	ptr = malloc(size);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
