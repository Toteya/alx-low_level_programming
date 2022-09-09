#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit decimal numbers with putchar().
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
		putchar(ch++);
	putchar('\n');
	return (0);
}
