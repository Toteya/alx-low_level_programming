/**
 * set_bit - Sets the value of a bit to 1 at the given index.
 * @n: The number whose bit's value is to be set.
 * @index: The index of the bit to be set.
 *
 * Return: If successful, 1. Otherwise, return -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int b = 1;

	if (index > 64) /* index is out of range long unsigned int */
		return (-1);
	for (i = 0; i < index; i++)
	{
		b = b << 1;
	}
	*n = *n | b;
	return (1);
}

