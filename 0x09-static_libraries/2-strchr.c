#include "main.h"

/**
 * _strch - print the function that locates a character in string
 * @s: the string
 * @c: the character c
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
