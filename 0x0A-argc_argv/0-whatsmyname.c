#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of commands
 * @argv: arguments entered
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
