#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of commands
 * @argv: arguments entered
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
