#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: Number of command line arguments to main
 * @argv: String array of command line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
