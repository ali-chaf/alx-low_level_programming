#include <stdio.h>

/**
 * main - Entry point
 * code will putchar alphabt except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abcs = 'a';

	for (abcs = 'a'; abcs <= 'z'; abcs++)
	{
		if (abcs != 'q' && abcs != 'e')
			putchar(abcs);
	}
	putchar('\n');
	return (0);
}
