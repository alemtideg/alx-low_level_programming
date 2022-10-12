#include "main.h"

/**
 * strcat - concetenate two strings
 * @dest: dest
 * @src: src
 * Return: a pointer to the resulting string dest
 */
 char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
