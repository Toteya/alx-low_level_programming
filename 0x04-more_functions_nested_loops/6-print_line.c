#include "main.h"

/**
 * print_line - Prints a line of length n
 * @n: Length of the line to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
