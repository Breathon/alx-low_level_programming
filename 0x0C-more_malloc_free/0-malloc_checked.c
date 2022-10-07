#include "main.h"
#include <stdlib.h>

/**
 * malloc checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);
	if (mem == 0)
		exit(98);
	return (mem);
}

