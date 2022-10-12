#include <stdio.h>
#include "main.h"

/**
 * _puts - print strings followed by new line
 * @str: the string to be printed
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
