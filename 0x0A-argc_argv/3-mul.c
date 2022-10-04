#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result
 * @argc: The number of arguments passed to the program
 * @argv: Pointer to an array of string arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	(void) argc;
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
