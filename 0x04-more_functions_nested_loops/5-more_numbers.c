#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14 ten times.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	int a, b;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			a = ((j % 100) - (j % 100) % 10) / 10;
			b = j % 10;
			if (a != 0)
				_putchar(a + '0');
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
