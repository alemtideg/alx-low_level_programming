#include <stdio.h>

/**
 * main - causes an infinite loop
 * Description: main function
 * this program prints "programming of infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 0)
{
putchar(i);
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
