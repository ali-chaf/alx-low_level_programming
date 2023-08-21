#include <string.h>
#include "main.h"
/**
 * puts2 - Prints every second character of a string,
 * followed by a new line
 * @str: Pointer to the string to print the characters from
 */
void puts2(char *str)
{
	int ali;

	for (ali = 0; str[ali] != '\0'; ali++)
		if (ali % 2 == 0)
		{
			_putchar(str[ali]);
		}
			_putchar('\n');
}
