#include "main.h"

/**
 * set_bit - Sets the bit at the given index to 1.
 * @n: A pointer to the number to modify.
 * @index: The index at which to set the bit to 1.
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);/*Failure*/

	*n = ((1UL << index) | *n);
	return (1);/*Success*/
}
