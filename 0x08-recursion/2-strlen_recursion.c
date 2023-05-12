#include "main.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Inputting string(pointer)
 * Return: the number of string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
