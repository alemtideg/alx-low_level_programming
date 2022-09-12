#include <stdio.h>

/**
 * main - print main function
 *
 * Description: main function
 * this program prints "programing of base 16 in lower case
 * Return: 0
 */

int main(void)
{
int dig;
int letter;
for (dig = 0; dig < 10; dig++)
	putchar((dig % 10) +'0');
for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
putchar('\n');
return (0);
}

