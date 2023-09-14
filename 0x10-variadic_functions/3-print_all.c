#include "variadic_functions.h"

/**
 * print_character - Prints a character.
 * @arg: A list of arguments pointing to
 * the character to be printed.
 */
void print_character(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_integer - Prints an integer.
 * @arg: A list of arguments pointing to
 * the integer to be printed.
 */
void print_integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_floating_point - Prints a floating-point number.
 * @arg: A list of arguments pointing to
 * the float to be printed.
 */
void print_floating_point(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string_value - Prints a string.
 * @arg: A list of arguments pointing to
 * the string to be printed.
 */
void print_string_value(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all_formats - Prints values based on the given format string.
 * @format: The format string specifying the types of values to print.
 */
void print_all_formats(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_character},
		{"i", print_integer},
		{"f", print_floating_point},
		{"s", print_string_value}
	};
	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != funcs[j].symbol[0])
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
