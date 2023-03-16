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
	if (size > (SIZE_MAX / sizeof(void *)))
	{
		exit(EXIT_FAILURE);
	}

	void *ptr = malloc(size);

	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	return (ptr);
}
