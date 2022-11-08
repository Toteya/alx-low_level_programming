#include "function_pointers.h"

/**
 * array_iterator - exexutes the passed function on each element of an array
 * @array: the array on which to execute the passed function
 * @size: the size of the array
 * @action: pointer to a function to be executed on the elements of the array
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL)
	{
		for (i = 0; i < (int) size; i++)
		{
			action(array[i]);
		}
	}
}
