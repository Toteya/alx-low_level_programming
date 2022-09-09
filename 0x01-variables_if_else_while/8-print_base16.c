#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints hexadecimal numbers
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
		putchar(n++);
	n = 'a';
	while (n <= 'f')
		putchar(n++);
	putchar('\n');
	return (0);
}
