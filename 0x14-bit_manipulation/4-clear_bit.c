#include "main.h"

/**
 * clear_bit - Sets the value of a specific bit to 0.
 * @n: A pointer to the number to be modified.
 * @index: The index of the bit to clear.
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);/*Failure*/

	*n = (~(1UL << index) & *n);
	return (1);/*Success*/
}
