#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet x10
 */
void print_alphabet_x10(void)
{
	char alpha, newline;

	for (newline = '0'; newline <= '9'; newline++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
