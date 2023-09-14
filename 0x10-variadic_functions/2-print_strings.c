#include "variadic_functions.h"

/**
 * print_strings - Print a series of strings followed by a new line.
 * @separator: The separator string to be printed between strings.
 * @n: The number of strings to be printed.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	char *str;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
