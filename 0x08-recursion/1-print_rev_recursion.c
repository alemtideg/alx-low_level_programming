#include "main.h"

/**
 * _rev_recursion - print string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
	_print_rev_recursion(s + 1);
}
}
