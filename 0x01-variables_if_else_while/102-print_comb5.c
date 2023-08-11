#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 on successful execution
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				printf("%02d %02d", num1, num2);
				if (num1 != 98 || num2 != 99)
				{
					printf(", ");
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

