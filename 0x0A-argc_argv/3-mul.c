#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of commands
 * @argv: arguments entered
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
