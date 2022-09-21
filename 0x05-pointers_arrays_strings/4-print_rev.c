#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: string in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)

_putchar(*(s + len));
_putchar(10);
}
