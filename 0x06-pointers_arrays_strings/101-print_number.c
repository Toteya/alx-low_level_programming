#include "main.h"

/**
 * print_number - Prints a signed integer to stdout
 * @n: an integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int ch;
	int i;
	int j;
	int flag = 0;
	int pow10, pow10_1;

	if (n < 0)
	{
		_putchar('-');
	}
	if (n >= 2000000000 || n <= -2000000000)
	{
		_putchar('2');
		flag = 1;
	}
	else if (n >= 1000000000 || n <= -1000000000)
	{
		_putchar('1');
		flag = 1;
	}
	for (i = 9; i > 0; i--)
	{
		pow10 = 1;
		for (j = 0; j < i; j++)
		{
			pow10 *= 10;
		}
		pow10_1 = pow10 / 10;
		ch = ((n % pow10) - (n % pow10_1)) / pow10_1;
		if (ch < 0)
			ch *= -1;
		if (ch == 0 && flag == 0 && i != 1)
			continue;
		else
		{
			flag = 1;
			_putchar(ch + '0');
		}
	}
}
