#include <stdio.h>

/**
 * main - Entry point
 * code will print alphABET
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abcs = 'a';
	char ABCS = 'A';

	for (abcs = 'a'; abcs <= 'z'; abcs++)
	{
		putchar(abcs);
	}

	for (ABCS = 'A'; ABCS <= 'Z'; ABCS++)
	{
		putchar(ABCS);
	}

	putchar('\n');
	return (0);
}
