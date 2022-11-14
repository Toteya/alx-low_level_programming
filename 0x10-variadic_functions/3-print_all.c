#include "variadic_functions.h"

/**
 * print_all - Prints any number of arguments in the given format
 * @format: String specifying the format of the argument
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list pa;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pa, int));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, double));
				break;
			case 's':
				printf("%s", va_arg(pa, char *));
				break;
			default:
				break;
		}
		i++;
	}
	va_end(pa);
}
