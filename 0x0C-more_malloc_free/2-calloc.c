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
	void *ptr;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	p = ptr;
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		*p++ = 0;
	}
	return (ptr);
}
