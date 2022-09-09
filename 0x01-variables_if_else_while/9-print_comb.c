#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible single digit combinations
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

