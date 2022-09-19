#include <stdio.h>
#include "main.h"

/**
 * _pust - print strings followed by new line
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
