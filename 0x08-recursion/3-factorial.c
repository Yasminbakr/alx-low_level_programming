#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n : the given integer number by the user to find the factorial of it.
 * Return : int factorial of number if it has or -1 it it hasnt.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
