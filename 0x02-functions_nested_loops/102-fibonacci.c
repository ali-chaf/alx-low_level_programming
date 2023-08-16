#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main()
{
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long next;
	int i ;



	for (i = 2; i < 52; ++i) 
	{
		next = first + second;
		printf("%lu", next);
		if(next != 20365011074)
		{
			putchar(',');
			putchar(' ');
		}
		first = second;
		second = next;
	}

	return 0;
}
