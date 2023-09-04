#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	array = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	strcpy(array, str);
	return (array);
}
