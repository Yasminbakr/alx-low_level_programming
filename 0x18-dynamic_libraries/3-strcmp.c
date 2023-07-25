#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1 : the first string
 * @s2 : the second string
 * Return: int value
 */

int _strcmp(char *s1, char *s2)
{
	int i, value;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			value = s1[i] - s2[i];
			i++;
		}
		else
		{
			value = s1[i] - s2[i];
			break;
		}
	}

	return (value);
}
