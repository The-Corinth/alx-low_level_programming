#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of commands
 * @argv: arguments entered
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins += cents / 25;
	cents = cents % 25;

	coins += cents / 10;
	cents = cents % 10;

	coins += cents / 5;
	cents = cents % 5;

	coins += cents / 2;
	cents = cents % 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
