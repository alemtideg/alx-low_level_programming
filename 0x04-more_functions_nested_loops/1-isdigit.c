#inlude "main.h"

/**
 * _isdigit - wether c is digit or not 
 * @c: tested character
 * Return: 1 if c is digit othrwise return 0
 */
int _isdigit(int c)
{
	if (c >= 48) &&(c <= 57)
{
		return (1);
}
	else
		return (0);
}
