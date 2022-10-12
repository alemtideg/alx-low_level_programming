#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a parameter
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;
	if (i = 0; i < size; i++)
		action(array[i]);
}
