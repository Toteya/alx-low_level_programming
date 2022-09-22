#include "main.h"

/**
 * print_number - Prints a signed integer to stdout
 * @n: an integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int ch, i, j;
	int flag = 0, l_bit = 0;
	int pow10;

	if (n < 0)
	{
		if (n < -2147483647)
		{
			n++;
			l_bit++;
		}
		_putchar('-');
		n *= -1;
	}
	if (n >= 1000000000)
	{
		flag = 1;
		if (n >= 2000000000)
			_putchar('2');
		else
			_putchar('1');
	}
	for (i = 9; i > 0; i--)
	{
		pow10 = 1;
		for (j = 0; j < i; j++)
			pow10 *= 10;
		ch = ((n % pow10) - (n % (pow10 / 10))) / (pow10 / 10);
		if (ch == 0 && flag == 0 && i != 1)
			continue;
		else
		{
			flag = 1;
			if (i == 1)
				_putchar(ch + '0' + l_bit);
			else
				_putchar(ch + '0');
		}
	}
}
