#include <stdio.h>

/**
 * main - Prints the first 98 numbers of the Fibonacci sequence
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long max = 1000000000000000000;
	long a = 1;
	long prev_a = 1;
	long tmp_a = 0;
	int b = 0;
	int prev_b = 0;
	int tmp_b = 0;

	printf("%d, ", 1);
	for (i = 0; i < 97; i++)
	{
		tmp_a = a;
		a = a + prev_a;
		prev_a = tmp_a;

		tmp_b = b;
		b = b + prev_b;
		prev_b = tmp_b;
		if (a > max)
		{
			a = a % max;
			b++;
		}
		if (b != 0)
			printf("%d", b);
		printf("%ld", a);
		if (i != 96)
			printf(", ");
	}
	printf("\n");
	return (0);
}
