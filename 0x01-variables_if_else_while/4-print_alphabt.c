#include <stdio.h>

/**
 * print - print the alphabetical order
 *
 * Description: main function
 * this program prints 'programming of lower case execpt q and e
 * Return: 0
 */
int main(void)
{
char(ch)
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch ! = 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
