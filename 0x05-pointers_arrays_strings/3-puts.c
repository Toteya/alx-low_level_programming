#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Pointer pointing to the string to be printed
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;
	char ch;

	while (*(str + i) != '\0')
	{
		ch = *(str + i++);
		_putchar(ch);
	}
	_putchar('\n');
}
