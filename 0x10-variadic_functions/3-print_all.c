#include "variadic_functions.h"

/**
 * print_all - Prints any number of arguments in the given format
 * @format: String specifying the format of the argument
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0, skip = 0;
	char *str;
	va_list ap;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				skip = 1;
				break;
		}
		if (!skip && format[i + 1] != '\0')
			printf(", ");
		skip = 0;
		i++;
	}
	printf("\n");
	va_end(ap);
}
