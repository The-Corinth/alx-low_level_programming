#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @size: number of elements in an array
 * @cmp: pointer to function used to compare variables
 * Return: -1 if no element matches and 1 if size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
