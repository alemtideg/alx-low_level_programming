#include "main.h"

/**
 * puts_half - print the half string
 *
 * @str:half string
 *
 */
	void puts_half(char *str)
{
		int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 2)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}

