#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in reverse order
 * Return: Always o (SUCCESS)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
		putchar(ch--);
	putchar('\n');
	return (0);
}
