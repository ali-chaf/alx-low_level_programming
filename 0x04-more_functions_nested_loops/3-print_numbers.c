#include "main.h"
#include <stdio.h>
void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
		{
		putchar(a);
		a++;
		}
	putchar('\n');
}
