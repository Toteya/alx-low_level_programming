#include "main.h"

/**
 * print_alphabet - writes the alphabet in lowercase
 * @ch: The character to print
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
