#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i = 0;
	char ch;

	while (*(str + i) != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		ch = *(str + --i);
		_putchar(ch);
	}
	_putchar('\n');
}
