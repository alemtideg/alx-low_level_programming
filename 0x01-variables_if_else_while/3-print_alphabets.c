#include <stdio.h>

/**
 * main - print the alphabets oflower case and uper case
 *
 * Description: using the main function
 * this program prints "programming of upcase and lower case
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

