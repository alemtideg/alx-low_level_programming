#include <stdio.h>

/**
 * maain - print main fuction
 *
 * Description: main function
 * this program prints "single digit base 10
 * Return: 0
 */
int main(void)
{
int dig;
for (dig = 0; dig < 10; dig++)
	putchar((dig % 10) + '0');
putchar('\n');
return (0);
}
