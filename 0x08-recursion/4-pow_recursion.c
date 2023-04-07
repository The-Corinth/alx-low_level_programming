#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to power y
 * @y : The power number
 * @x : x ^ y
 * Return : The result of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1); /* Any number to power of zero is 1*/
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
