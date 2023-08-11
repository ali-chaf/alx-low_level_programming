#include <stdio.h>
/**
 * main - Entry point
 * program that prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ten, one;

	for (ten = 0; ten <= 8; ten++)
	{
		for (one = ten + 1; one <= 9; one++)
		{
			printf("%d%d", ten, one);
			if (ten != 8 || one != 9)
				printf(", ");
		}
	}

	putchar('\n');
	return (0);
}
