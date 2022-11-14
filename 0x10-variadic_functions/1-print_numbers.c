#include "variadic_functions.h"

/**
 * print_numbers - Prints all the numbers passed as arguments
 * @separator: String used as separator between arguments
 * @n: Number of arguments to be printed
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
