#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the input number
 * @y: the power
 * Return: int value of function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);/*as an declaration of error*/
	else if (y == 0)
		return (1);/*because any number with power 0 = 1*/
	else if (y == 1)
		return (x);/*because any num with power 1 = same num*/
	else
		return (x * _pow_recursion(x, y - 1));


}
