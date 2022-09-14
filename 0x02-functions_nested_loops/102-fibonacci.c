#include <stdio.h>

/**
 * main - Prints the first 50 numbers of the Fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, n;
	unsigned long int tmp1 = 0;
	unsigned long int tmp2 = 1;

	for (i = 0; i < 50; i++)
	{
		n = tmp1 + tmp2;
		printf("%lu", n);
		if (i != 49)
			printf(", ");
		tmp1 = tmp2;
		tmp2 = n;
	}
	printf("\n");
	return (0);
}
