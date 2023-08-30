#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function that prints a string in reverse
 * using recursion method
 * @s: string to print in reverse
*/
void _print_rev_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return;
	}

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_print_rev_recursion(s - 1);
}
