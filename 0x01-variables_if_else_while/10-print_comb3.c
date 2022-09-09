#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible double digit combinations, omit repetitions
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int d1 = '0';
	int d2 = d1 + 1;

	while (d1 < '9')
	{
		while (d2 <= '9')
		{
			putchar(d1);
			putchar(d2++);
			if (d1 != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
		d1++;
		d2 = d1 + 1;
	}
	putchar('\n');
	return (0);
}
