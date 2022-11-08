#include "function_pointers.h"

/**
 * int_index - searches for an integer according to the conditions
 * of the function passed.
 * @array: the array in which to search for the integer
 * @size: number of array elements
 * @cmp: pointer to the comparison function that determines
 * what integer to search for.
 * Return: index of the first element for which cmp does not return 0.
 * otherwise, returns -1 if no match is found or size is invalid i.e. <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
