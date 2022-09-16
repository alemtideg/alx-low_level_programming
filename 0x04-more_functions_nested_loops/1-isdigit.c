#inlude "main.h"

/**
 * _isdigit - checks c wether c is digit or not 
 * @c: tested character
 * Return: 1 if c is digit othrwise return 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
{
		return (1);
}
		return (0);
}
