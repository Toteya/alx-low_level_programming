#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in lowercase
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
