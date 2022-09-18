#include <stdio.h>

/**
 * main - print main function
 *
 * Return: 0
 */
int main(void)
{
	int num1,num2,num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');
				
				if (num1 == 9 && num2 == 9 && num3 == 9)
					continu;
				putchar(',');
				putchar(' ');
			}
		}
	}
	purchar('\n');
	return (0);
}

