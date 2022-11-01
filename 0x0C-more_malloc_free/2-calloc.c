#include "main.h"

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Number of bytes of memory to be allocated to each array element
 *
 * Return: Pointer to the allocated memory address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
