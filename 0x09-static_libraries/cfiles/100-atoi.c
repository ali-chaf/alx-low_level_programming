#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int index, signCount, number, length, foundNumber, currentDigit;

	index = 0;
	signCount = 0;
	number = 0;
	length = 0;
	foundNumber = 0;
	currentDigit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && foundNumber == 0)
	{
		if (s[index] == '-')
			++signCount;

		if (s[index] >= '0' && s[index] <= '9')
		{
			currentDigit = s[index] - '0';
			if (signCount % 2)
				currentDigit = -currentDigit;
			number = number * 10 + currentDigit;
			foundNumber = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			foundNumber = 0;
		}
		index++;
	}

	if (foundNumber == 0)
		return (0);

	return (number);
}
