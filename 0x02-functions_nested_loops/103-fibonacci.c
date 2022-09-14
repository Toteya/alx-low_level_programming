#include <stdio.h>

/**
 * main - Calculates the sum of all even numbered terms of the
 * Fibonacci sequence under 4,000,000.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int n;
	unsigned long int sum = 0;
	unsigned long int tmp1 = 0;
	unsigned long int tmp2 = 1;

	while (n < 4000000)
	{
		n = tmp1 + tmp2;
		if (n % 2 == 0)
			sum += n;
		tmp1 = tmp2;
		tmp2 = n;
	}
	printf("%lu\n", sum);
	return (0);
}
