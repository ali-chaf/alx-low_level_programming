#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * code checks if rand num is pos or neg or is 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
		printf("positive\n");
	if (n == 0)
		printf("zero\n");
	if (n < 0)
		printf("negative\n");
	return (0);
}
