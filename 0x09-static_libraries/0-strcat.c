#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest :Destination string
 * @src: String for adding
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, num;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
		j++;

	if (i < j)
		num = j;
	else if (i >= j)
		num = i;

	for (k = 0; k < num; k++)
	{
		if (num == j)
			dest[k + num - 1] = src[k];
		else
			dest[k + num] = src[k];
	}

	return (dest);
}
