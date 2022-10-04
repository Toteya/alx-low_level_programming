#include <stdio.h>

/**
 * main - Prints number of arguments passed to the program
 * @argc: The number of arguments passed to the program
 * @argv: Pointer to an array of pointers to string arguments
 * supplied to the program
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
