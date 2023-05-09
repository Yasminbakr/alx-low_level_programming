#include "main.h"


/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to .. search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	}

	return (0);
}
