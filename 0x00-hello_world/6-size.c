#include <stdio.h>

/**
 * main - print the size of variabels
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	float c;

	printf("size of a char: %d byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(b));
	printf("size of a float: %d byte(s)\n", sizeof(c));
	return (0);
}
