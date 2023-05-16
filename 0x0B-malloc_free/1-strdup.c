#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	char *abc;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		abc[r] = str[r];

	return (abc);
}


