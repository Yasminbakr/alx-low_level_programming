#include "function_pointers.h"

/**
 * print_name- prints a name as is
 * @name: name to print (char string)
 * @f: pointer to the function
 * Return: noting because its void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
