#include <stdio.h>

/**
 * main - Entry point
 * code uses putchar to print alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abcs = 'a';

	for (abcs = 'a'; abcs <= 'z'; abcs++)
		{
		putchar(abcs);
		}
		putchar('\n');
	return (0);
}
