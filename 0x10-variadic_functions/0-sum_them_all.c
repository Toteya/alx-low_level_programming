#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of a variable number of integers
 * @n: The number of arguments
 *
 * Return: The sum (int) of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
