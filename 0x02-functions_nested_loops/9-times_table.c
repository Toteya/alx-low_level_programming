#include "main.h"

/**
 * times_table - Prints the times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;
	int n;
	int a, b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			a = (n - n % 10) / 10;
			b = (n % 10);
			if (a == 0 )
			{
				if (j != 0)
					_putchar(' ');
			}
			else
				_putchar(a + '0');
			_putchar(b + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
