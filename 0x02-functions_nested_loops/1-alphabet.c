#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Description: main function
 * this program prints "programming of _putchar
 *  Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
