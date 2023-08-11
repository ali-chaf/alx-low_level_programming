#include <stdio.h>

/**
 * main - Entry point
 * for loop to print base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ten = '0';

	for (ten = '0'; ten <= '9'; ten++)
	{
		putchar(ten);
	}
	putchar('\n');
	return (0);
}
