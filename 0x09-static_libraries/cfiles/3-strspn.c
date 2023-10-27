#include "main.h"

/**
 * _strspn - This function calculates the length of the prefix substring.
 * @s: The input string.
 * @accept: The characters to match as the prefix.
 *
 * Return: The length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int index1 = 0, index2 = 0;
	unsigned int count = 0;

	while (s[index1] != ' ' && s[index1] != '\0')
	{
		while (accept[index2] != '\0')
		{
			if (s[index1] == accept[index2])
				count++;
			index2++;
		}
		index1++;
		index2 = 0;
	}
	return (count);
}
