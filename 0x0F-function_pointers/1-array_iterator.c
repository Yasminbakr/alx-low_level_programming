#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each elem of array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 * Return: no return as its a void function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
