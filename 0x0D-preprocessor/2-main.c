#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	const char *filename = __FILE__;
	int i;

	for (i = 0; filename[i] != '\0'; i++)
		putchar(filename[i]);
	putchar('\n');
	return (0);
}
