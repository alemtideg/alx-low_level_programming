#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c);
{
	for (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

