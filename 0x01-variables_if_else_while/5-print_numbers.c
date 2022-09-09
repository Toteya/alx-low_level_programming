#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit decimal numbers from 0.
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
		printf("%d", i++);
	printf("\n");
	return (0);
}
