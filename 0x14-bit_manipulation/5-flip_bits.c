#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be
 * flipped to transform one number into another.
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;/*Variable declaration*/
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
/**
 * Iterate through each bit position in 'exclusive'
 * from the most significant bit to the least significant bit.
 * If the current bit is set (1),
 * increment the 'countbit' to count differing bits.
 */
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
