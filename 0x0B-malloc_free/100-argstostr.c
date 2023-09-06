#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t size = 60;
	void *ptr;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	ptr = malloc(size);
	if (ptr == NULL || ac == 0)
	{
		return (NULL);
	}
	return (ptr);
}
