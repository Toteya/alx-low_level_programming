#include <stdio.h>
#include "3-calc.h"

/**
 * main - Tests the code
 * @argc: Number of arguments passed to main function
 * @argv: Array of string arguments passed to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	char *opr = "+-*/%";

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 0; i < 5; i++)
	{
		if (opr[i] == *argv[2])
		{
			printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
			return (EXIT_SUCCESS);
		}
	}
	printf("Error\n");
	return (99);
}
