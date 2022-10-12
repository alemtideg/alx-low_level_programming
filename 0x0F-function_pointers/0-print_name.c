#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name.
 * @name: name of the function
 * @f: printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
