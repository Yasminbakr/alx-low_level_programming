#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to .. search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
