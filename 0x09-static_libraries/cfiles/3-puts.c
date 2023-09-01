#include "main.h"

/**
 * _puts - Prints a string to stdout followed by a new line
 * @string: Pointer to the string to be printed
 */
void _puts(char *string)
{
	int index;

	for (index = 0; string[index] != '\0'; index++)
	{
		_putchar(string[index]);
	}
	_putchar('\n');
}
