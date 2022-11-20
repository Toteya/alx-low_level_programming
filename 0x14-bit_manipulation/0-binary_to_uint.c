#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to string consisting of 0 and 1 chars
 *
 * Return: The converted number.
 * Otherwise, return 0 if failed.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		num = (num * 2) + b[i] - '0';
	}
	return (num);
}
