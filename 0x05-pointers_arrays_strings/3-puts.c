#include <stdio.h>
#include "main.h"

/**
 * _puts - print strings followed by new line
 * @str - prints the string
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
