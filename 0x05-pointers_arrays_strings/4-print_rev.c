#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int c = strc(s);

	while (c--)

putchar(*(s + c));
putchar(10);
}
