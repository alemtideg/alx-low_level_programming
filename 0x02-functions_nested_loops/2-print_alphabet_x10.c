#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c , l;

	l = 0;

	while (l < 10)
	{
		for (c = 'a';  c <= 'z'; c++)
		{
			_putchar(c);
		}
		l++;
			_putchar('\n');
	}
}

	

