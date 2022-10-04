#include <stdio.h>

/**
 * main - Prints out its name (program name)
 * @argc: Number of arguments supplied to the program
 * @argv: Array of pointers to string arguments supplied to the program
 *
 * Return: Always 0 (SUCCESS).
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
