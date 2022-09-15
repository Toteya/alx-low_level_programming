#include "main.h"
#include <stdio.h>

/**
 * main - Prints given characters and whether or not they are uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
