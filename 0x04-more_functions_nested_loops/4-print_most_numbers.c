#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int n;

	for (c = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
