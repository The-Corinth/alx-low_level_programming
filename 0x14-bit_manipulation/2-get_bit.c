#include "main.h"

/**
 * get_bit - Returns the value of a specific bit in a decimal number.
 * @n: The decimal number to extract the bit from.
 * @index: The index of the bit to retrieve.
 * Return: The bit's value or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	int bit_value = (n >> index) & 1;

	return (bit_value);
}
