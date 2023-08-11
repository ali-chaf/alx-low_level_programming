#include <stdio.h>

/**
 * main - Entry point
 * prints alphabet in reverse using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cba = 'a';

	for (cba = 'z'; cba >= 'a'; cba--)
	{
		putchar(cba);
	}
	putchar('\n');
	return (0);
}
