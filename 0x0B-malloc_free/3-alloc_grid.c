#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: 2D array width
 * @height: 2D array height
 * Return: 2 dimensional array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	i = 0;
	j = 0;

	if (width < 1 || height < 1)
		return (NULL); /*returns null because it is 0*/
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	while (i < height)
		while (j < width)
			arr[i][j] = 0;
	return (arr);
}
