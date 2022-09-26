#include "main.h"
#include <stdio.h>

/**
 * main - Locates any one of a given set of bytes in string and prints the
 * rest of the string
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
