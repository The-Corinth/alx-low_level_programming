#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int number = 1;
	char *byte_pointer = (char *)&number;

	return (*byte_pointer);
}
