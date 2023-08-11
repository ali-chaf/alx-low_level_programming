#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Code will print lastDigit of n and compare it to some numbs
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int end;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	end = (n % 10);
	printf("Last digit of %d is %d ", n, end);

	if (end > 5)
		printf("and is greater than 5\n");
	if (end == 0)
		printf("and is 0\n");
	if (end < 6 && end != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
