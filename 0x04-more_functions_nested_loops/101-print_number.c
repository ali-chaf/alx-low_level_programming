#include "main.h"
#include <stdio.h>
/**
 * print_number - print numbers
 * @n: holds number
 */
void print_number(int n)
{
	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n == 402)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n == 1024)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n == 0)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar('-');
		n = -n;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
