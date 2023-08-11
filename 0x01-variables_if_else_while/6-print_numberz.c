#include <stdio.h>

/**
 * main - Entry point
 * putchar and for loop to print base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bt = '0';

	for (bt = '0' ; bt <= '9' ; bt++)
	{
		putchar(bt);
	}
	putchar('\n');
	return (0);
}
