#include "main.h"

/**
 * jack_bauer - Prints each minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;
	int i, j;

	for (i = 0; i < 24; i++)
	{
		a = (i - (i % 10)) / 10;
		b = i % 10;
		for (j = 0; j < 60; j++)
		{
			c = (j - (j % 10)) / 10;
			d = j % 10;
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar('\n');
		}
	}
}
