#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number whose binary representation is to be printed
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int num, pow = 1;
	int i, bitC = 0;

	num = n;
	while (n > 1)
	{
		num = num >> 1;
		pow *= 2;
		if (num <= 1)
		{
			_putchar('1');
			n = n - pow;
			break;
		}
		bitC++;
	}
	for (; bitC >= 0; bitC--)
	{
		num = n;
		pow = 1;
		for (i = 0; i < bitC; i++)
		{
			num = num >> 1;
			pow *= 2;
		}
		if (num == 1)
		{
			n = n - pow;
		}
		_putchar('0' + num);
	}
}
