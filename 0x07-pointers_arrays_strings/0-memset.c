#include "main.h"

/**
 * _memset - prints memset fills memory with constant byte
 * @s: memory area pointed by s
 * @n: number of bytes
 * @b: constant byte
 * Return: returns tomemory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
		s[n - 1] = b;
	n--;
}
return (s);
}
