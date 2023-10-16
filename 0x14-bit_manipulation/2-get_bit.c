#include"main.h"

/**
 * get_bit - Returns a bit at a given index
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;/*Variable declaration*/

	if (index > (sizeof(unsigned long int) * 8 - 1))
		/*Check and return a bit at a specific index*/
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
