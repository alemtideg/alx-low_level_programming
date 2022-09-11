#include <stdio.h>

/**
 * main - print the alphabetical order
 *
 * Description: main function
 * this programming prints "alphabetical order
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
