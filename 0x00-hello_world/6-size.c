#include <stdio.h>

/**
 * main - print the size of variables
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	short int d;
	float e;
	unsigned char f;

	printf("size of a char: %2d byte(s) \n", sizeof(a));
	printf("size of an int: %2d byte(s) \n", sizeof(b));
        printf("size of along int: %2d byte(s) \n", sizeof(c));  
        printf("size of a short int: %2d byte(s) \n", sizeof(d));   	
        printf("size of an float: %2d byte(s) \n", sizeof(e));
	printf("size of an unsigned char: %2d byte(s) \n", sizeof(f));   
	return (0);
}


