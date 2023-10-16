#include "main.h"

/**
 * binary_to_uint - This function changes a binary number
 * to an unsigned int.
 * @b: This is a pointer to a string that has a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int a;/* Variable declaration*/
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)/*
					*first loop to check
					*if each character in the string is 0 or 1
					*if not return0
					*/
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)/*
					*second loop building up the integer
					*representation of the binary number stored in b
					*/
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
