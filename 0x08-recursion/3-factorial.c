#include "main.h"
/**
 *factorial - A function that returns a factorial of an number
 *@n : The number under consideration
 * Return : integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);/*factorial of 0 is 1*/
	if (n < 2)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	return (0);
}
