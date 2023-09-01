#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * discription: prints the number of arguments passed into it.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv != NULL)
	printf("%d\n", argc - 1);
	return (0);
}
