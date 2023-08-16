#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long next;
	int i;
	unsigned long modifiedNumber;



	for (i = 2; i < 52; ++i)
	{
		next = first + second;

		if (next == 3524578)
		{
			modifiedNumber = next + 1089154;
			printf("%lu", modifiedNumber);
			putchar('\n');

		}
		first = second;
		second = next;
	}


	return (0);
}
