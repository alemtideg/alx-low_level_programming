#include "main.h"

/**
 * _put - print strings followed by new line
 *
 * @s: strings
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
