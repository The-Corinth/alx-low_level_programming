#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: 2D array width
 * @height: 2D array height
 * Return: 2 dimensional array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr, *data;
	int i;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(sizeof(int *) * height + sizeof(int) * width * height);
	if (arr == NULL)
		return (NULL);

	data = (int *)(arr + height);
	for (i = 0; i < height; i++)
		arr[i] = data + i * width;
	memset(data, 0, sizeof(int) * width * height);

	return (arr);
}
