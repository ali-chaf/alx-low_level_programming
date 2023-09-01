#include <stdio.h>
/**
 * main - Entry point that takes two arguments
 * @argc: argument count
 * @argv: argument vector
 * discription: prints the name of the program
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
