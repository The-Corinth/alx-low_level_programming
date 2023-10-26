#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to the binary string.
 * Return: The converted unsigned integer or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);/* Returns 0 if invalid input*/

	for (int i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		result = 2 * result + (b[i] - '0');/*Binary digit addition*/
	}

	return result;
}
