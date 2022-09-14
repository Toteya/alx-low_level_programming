#include "main.h"

/**
 * print_times_table - Prints the times table of any number n
 * @n: The size of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;
	int x;
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				a = ((x % 1000) - (x % 1000) % 100) / 100;
				b = ((x % 100) - (x % 100) % 10) / 10;
				c = x % 10;
				if (a != 0)
					_putchar(a + '0');
				else if (j != 0)
					_putchar(' ');
				if (b != 0 || a != 0)
					_putchar(b + '0');
				else if (j != 0 && a == 0)
					_putchar(' ');
				_putchar(c + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			 _putchar('\n');
		}
	}
}
