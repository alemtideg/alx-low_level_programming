#include "main.h"

/**
 * print_rev - print string in reverse
 * @str: string in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int c = 0, index;

	while (s[index++])
		c++;
	for (index = c - 1; index >= 0; index--)
		putchar(s[index]);
	putchar('\n');
}
