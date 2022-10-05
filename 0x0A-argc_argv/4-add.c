#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add two positive numbers passed to the program
 * @argc: The number of arguments passed to the program
 * @argv: Pointer to an array of string arguments passed to the program
 *
 * Return: If successful, 0.
 * Otherwise, return 1.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

