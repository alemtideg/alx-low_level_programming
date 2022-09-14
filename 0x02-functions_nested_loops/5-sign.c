#include "main.h"

/**
 * int print_sign is a function that check sign of number
 * @c: single letter input
 * Return: 1 if n is positvie return 0 if n is negative otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

