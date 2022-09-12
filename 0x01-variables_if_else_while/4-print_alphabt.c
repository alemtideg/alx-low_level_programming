#include <stdio.h>

/**
 * main - print the lower case alphabet
 *
 * Description: main function
 * this program prints "programing of lower case except e and q
 * Return: 0
 */
int main(void)
{
char(ch);
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
