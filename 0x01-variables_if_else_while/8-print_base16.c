#include <stdio.h>
/**
 * main - Entry point
 * printing all the numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int  num = '0';
	char let = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
