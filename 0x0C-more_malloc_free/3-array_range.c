#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: first element and smallest number in the array range
 * @max: last element and largest number in the array range
 *
 * Return: Pointer to the array memory address
 */
int *array_range(int min, int max)
{
	unsigned int i, size;
	int *p;

	if (min > max)
		return (NULL);
	size = (max - min + 1);
	p = malloc(sizeof(int) * (size));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
