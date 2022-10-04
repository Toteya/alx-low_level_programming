#include <stdio.h>

/**
 * main - Prints all arguments supplied to the program
 * @argc: The number of arguments passed to the program
 * @argv: Pointer to an array of string arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
