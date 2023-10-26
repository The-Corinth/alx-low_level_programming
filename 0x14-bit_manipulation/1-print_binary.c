#include "main.h"

/**
 * print_binary - Prints binary representation of a decimal number.
 * @n: The decimal number to be converted and printed in binary.
 */
void print_binary(unsigned long int n)
{
	int bit, count = 0;
	unsigned long int mask;

	for (bit = 63; bit >= 0; bit--)
	{
		mask = n >> bit;
		if (mask & 1)
		{
			_putchar('1');
			count++; /* continue as long as conditions satisfy*/
		}
		else if (mask)
			_putchar('0');
	}
	if (!mask)
		_putchar('0');
}
