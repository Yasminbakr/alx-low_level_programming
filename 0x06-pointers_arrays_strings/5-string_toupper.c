#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: String to be reversed
 * Return: string
 */

char *string_toupper(char *str)
{
	int i, j;
	char letter;

	i = 0;
	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		letter = str[j];
		if (letter >= 'a' && letter <= 'z')
		{
			letter -= 32;
			str[j] = letter;
		}
	}

	return (str);
}
