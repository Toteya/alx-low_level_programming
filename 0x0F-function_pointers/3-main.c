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
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	func = get_op_func(argv[2]);
	if((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && atoi(argv[3]) == 0)
		{
			printf("Error\n");
			return (100);
		}
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	else
		printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (EXIT_SUCCESS);
}

