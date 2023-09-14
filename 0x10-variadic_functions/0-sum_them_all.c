#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all provided parameters.
 * @n: The number of parameters to sum.
 *
 * Return: If n is 0, return 0. Otherwise, return the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
	}

	va_end(args);
	return (sum);
}
