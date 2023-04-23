#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int j, num = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]))
				num = i + j;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = num;
	}
	printf("%d\n", sum);
	return (0);
}
