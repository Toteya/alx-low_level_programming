#include "main.h"

/**
 * get_bit - Returns the value of a bit a given index.
 * @n: The number whose bit should be returned
 * @index: Index of the bit to be returned.
 *
 * Return: int - value of the bit. Otherwise, if failed return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
       	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (n <= 1)
		{
			return (-1);
		}
		n = n >> 1;
	}
	if ((n % 2) == 0)
	{
		bit = 0;
	}
	else
		bit = 1;
	return (bit);
}

