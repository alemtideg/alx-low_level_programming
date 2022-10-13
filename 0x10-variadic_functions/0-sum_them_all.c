#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: amount of arguments
 *
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	 va_list vallist;
	 unsigned int i;
	 int sum = 0;

if (n == 0)
return (0);

	 va_start(valist, n);
for (i = 0; i < n; i++)
		 sum += va_arg(valist, int)

			 va_end(valist);
return (SUM);
}
