#include <stdio.h>

/**
 * print_diagsums - Computes and prints the sums of the diagonals of a
 * square matrix (two-dimensional array)
 * @a: Pointer to the first memory location of the array
 * @size: The size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_a = 0, sum_b = 0;
	int *b = a + size - 1;

	for (i = 0; i < size; i++)
	{
		sum_a += *a;
		sum_b += *b;
		a += (size + 1);
		b += (size - 1);
	}
	printf("%d, %d\n", sum_a, sum_b);
}
