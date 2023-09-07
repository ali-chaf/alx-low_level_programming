#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 * Return: pointer to allocated memory or normal process termination if error
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
