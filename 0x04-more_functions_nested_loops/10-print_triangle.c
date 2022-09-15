#include "main.h"

/**
 * print_triangle - Prints triangle of the given size
 * @size: The size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
