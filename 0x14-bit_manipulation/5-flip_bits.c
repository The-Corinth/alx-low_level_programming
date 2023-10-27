#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 * from one number to another.
 * @n: The starting number.
 * @m: The ending number.
 * Return: The number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit, count = 0;
	unsigned long int xor_result = n ^ m;

	for (bit = 63; bit >= 0; bit--)/*Begin loop*/
	{
		if (xor_result & (1UL << bit))
		{
			count++;/*Continue as long as condition met*/
		}
	}

	return (count);
}
