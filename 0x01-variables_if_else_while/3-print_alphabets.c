#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and then in uppercase
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
