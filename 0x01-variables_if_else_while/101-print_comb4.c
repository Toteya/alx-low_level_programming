#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible unique 3 digit combinations.
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int d1 = '0';
	int d2 = d1 + 1;
	int d3 = d2 + 1;

	while (d1 <= '7')
	{
		while (d2 <= '8')
		{
			while (d3 <= '9')
			{
				putchar(d1);
				putchar(d2);
				putchar(d3++);
				if (d1 != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
			d3 = d2 + 1;
		}
		d1++;
		d2 = d1 + 1;
		d3 = d2 + 1;
	}
	putchar('\n');
	return (0);
}
