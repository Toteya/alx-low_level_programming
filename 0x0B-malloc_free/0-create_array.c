#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes with a specific char
 * @size: Size of the array
 * @c: Character with which to initilize the array
 *
 * Return: Pointer to the array that was created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *) malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	return (ptr);
}
