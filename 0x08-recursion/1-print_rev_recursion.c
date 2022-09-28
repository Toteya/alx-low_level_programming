#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to a string to be printed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
