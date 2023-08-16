#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long long first = 0;
	long long second = 1;
	long long next;
	int i;

	for (i = 2; i < 52; ++i)
	{
		next = first + second;

		printf("%lld", next);
		if (next != 20365011074)
		{
			putchar(',');
			putchar(' ');
		}
		first = second;
		second = next;
	}

	return (0);
}
