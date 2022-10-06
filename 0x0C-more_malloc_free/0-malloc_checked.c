#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
