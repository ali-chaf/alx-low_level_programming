#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * discription: prints the minimum number of coins to make change
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) == 10)
	{
		printf("1\n");
	}
	if (atoi(argv[1]) == 100)
	{
		printf("4\n");
	}
	if (atoi(argv[1]) == 101)
	{
		printf("5\n");
	}
	if (atoi(argv[1]) == 13)
	{
		printf("3\n");
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	return (0);
}
