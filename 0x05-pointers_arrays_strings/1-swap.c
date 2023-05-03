#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First variable to be swapped
 * @b: Second variable to be swapped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
