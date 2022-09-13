#include "main.h"

/**
 * print_sign - Checks and prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if number is positive
 * returns 0 if number is zero
 * and returns -1 if number negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
