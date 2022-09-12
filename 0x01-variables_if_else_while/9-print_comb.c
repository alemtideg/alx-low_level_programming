#include <stdio.h>  

/**
 * main - print main function
 *
 * Description: main function
 * this programprints "programing of combination of numbers up to 9
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
	putchar((num % 10) + '0');
if (num == 9)
	continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}


