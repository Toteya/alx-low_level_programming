#include <stdio.h>

/**
 * main - Finds the largest prime factor of a given number
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long i;
	long j;
	long k;
	int c;
	long largest_prime;

	for (k = 1; k <= num; k++)
	{
		if (num % k == 0)
			i = num / k;	/* Only do "prime number check" if i is a factor of num */
		else
			continue;

		c = 0;
		for (j = 2; j <= i / 2; j++)	/* Loop checks whether i is a prime number */
		{				/* No need to do iterations for numbers above i/2 */
			if (i % j == 0)
				c++;
			if (c > 0)		/* If c > 0, obviously i is not a prime number */
				break;		/* skip unnecessary iterations */
		}
		if (c == 0)
		{
			largest_prime = i;
			break;
		}
	}
	printf("%ld\n", largest_prime);
	return (0);
}
