#include "main.h"

/**
 * _strcpy - src string copy
 *
 * @dset: dest
 * @src: src
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

