#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hund, ten, one;

	for (hund = 0; hund <= 8; hund++)
	{
		for (ten = hund + 1; ten <= 9; ten++)
		{
			for (one = ten + 1; one <= 9; one++)
			{
				printf("%d%d%d", hund, ten, one);
				if (hund != 7 || ten != 8 || one != 9)
					printf(", ");
			}
		}
	}

	putchar('\n');
	return (0);
}
