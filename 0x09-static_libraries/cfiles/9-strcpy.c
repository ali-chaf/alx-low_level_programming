#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte ('\0'),
 * to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, index;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (index = 0; index < length; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
