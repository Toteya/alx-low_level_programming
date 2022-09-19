#include <stdio.h>

/**
 * print_array - Prints the given number of elements array of intgers
 * @a: Pointer pointing to the array to be printed
 * @n: The number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i + 1 < n)
			printf(", ");
	}
	printf("\n");
}
