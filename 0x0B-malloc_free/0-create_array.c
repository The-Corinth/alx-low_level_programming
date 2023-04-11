#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - a function that creates an array of chars
 * @size: Denotes size of string
 * @c: The array
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, c, size);
	{
		arr[0] = c;
	}
	return (arr);
}
