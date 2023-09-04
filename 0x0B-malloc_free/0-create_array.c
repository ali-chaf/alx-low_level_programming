#include "main.h"
/**
 * create_array - creates an array of chars,
 * @size: size of the array
 * @c: storaged char
 * Return: NULL if size is zero or if it fails
*/
char *create_array(unsigned int size, char c)
{
	size_t i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
			char *array = malloc(sizeof(char) * size);
				if (array == NULL)
				{
					return (NULL);
				}
				for (i = 0; i < size; i++)
				{
					array[i] = c;
				}
				return (array);
	}
}
