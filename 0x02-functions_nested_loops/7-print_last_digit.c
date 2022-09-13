#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: the number whose last digit is to be printed
 *
 * Return: the last digit of num
 */
int print_last_digit(int num)
{
	int d = num % 10;

	if (d < 0)
		d = -d;
	_putchar('0' + d);
	return (d);
}
