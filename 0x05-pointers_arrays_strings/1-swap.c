#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first number
 * @b: second number
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

