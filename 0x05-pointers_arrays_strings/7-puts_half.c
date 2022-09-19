#include "main.h"

/**
 * puts_half - Prints the second half of a given string
 * @str: Pointer pointing to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int len;

	while (*(str + i) != '\0')
	{
		i++;
	}
	len = i;
	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
