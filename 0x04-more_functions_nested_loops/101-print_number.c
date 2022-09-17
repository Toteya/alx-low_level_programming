#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints any given number n using the _putchar() function.
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int x;
	int i;
	int j;
	int ch;
	int e10, e10_1;
	int blank = 1;

	if (n < 0)		/* print negative numbers */
	{
		n = -n;
		_putchar('-');
	}
	x = n;

	for (i = 9; i > 0; i--)
	{
		e10 = 1;
		for (j = 0; j < i; j++)
		{
			e10 *= 10;
		}
		e10_1 = e10 / 10;

		ch = ((x % e10) - (x % e10) % e10_1) / e10_1;
		if (blank == 1)		/* Allows insigficant zeros not be printed */
		{
			if (ch != 0)
				blank = 0;
		}

		if (ch == 0 && blank == 1 && i != 1)	/* skip insignificant zeros */
			continue;
		else
			_putchar(ch + '0');
	}
}
