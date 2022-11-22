#include "main.h"

/**
 * clear_bit - Set the value of a bit at the given index to zero.
 * @n: Pointer to the number whose bit is to be set to zero.
 * @index: The index of the bit to be set to zero.
 *
 * Return: If successful 1. Otherwise return -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int b, bb;

	b = *n;
	bb = b;
	if (index > 64)
		return (-1);
	while (bb > 1)
	{
		bb = bb >> 1;
		b = b | bb;
	}
	b = b - 1;
	for (i = 0; i < index; i++)
	{
		b = (b << 1) + 1;
	}
	*n = *n & b;
	return (1);
}
