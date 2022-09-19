#include "main.h"

/**
 * _strlen - returns the length of strings
 * @c:i
 * @s: string legnth
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

while (*(s + c) != '\0')
	c++;
return (c);
}
