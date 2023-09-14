#include "variadic_functions.h"

/**
 * print_numbers - Print a series of numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers to be passed.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
