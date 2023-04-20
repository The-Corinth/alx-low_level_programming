#include <unistd.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - takes array, size, and pointer as arguments
 * @array: pointer to the integer array
 * @size: number of elements in the array
 * @action: is a function pointer that takes an integer as its argument
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
