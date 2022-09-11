#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all combinations of two 2-digit numbers
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int d1 = '0';
	int d2 = '0';
	int d3 = '0';
	int d4 = '1';

	while (d1 <= '9')
	{
		while (d2 <= '9')
		{
			while (d3 <= '9')
			{
				while (d4 <= '9')
				{
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
					if (!((d1 == '9') && (d2 == '8')))
					{
						putchar(',');
						putchar(' ');
					}
					d4++;
				}
				d3++;
				d4 = '0';
			}
			d2++;
			d3 = d1;
			d4 = d2 + 1;
		}
		d1++;
		d2 = '0';
		d3 = d1;
		d4 = '1';
	}
	putchar('\n');
	return (0);
}
