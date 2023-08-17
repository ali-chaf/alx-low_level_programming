#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 *@n: number of spaces
 */
void print_diagonal(int n)
{
	int slash, space;

	if (n <= 0)
		_putchar('\n');


	for (slash = 1; slash <= n; slash++)
	{
		for (space = 1; space <= slash - 1; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
