#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)

putchar(*(s + len));
_putchar(10);
}
