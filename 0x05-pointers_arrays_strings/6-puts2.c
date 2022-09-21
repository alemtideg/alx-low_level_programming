#include "main.h"

/**
 * puts2 - prints
 * @str: prints
 */
void puts2(char *str)
{
	int index = 0, c =0;

	while (str[index++])
		c++;
	for (index = 0; index < c; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
