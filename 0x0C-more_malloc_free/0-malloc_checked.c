#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);


	return (mem);
}

