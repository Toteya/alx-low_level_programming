#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints entire alphabet except 'q' and 'e'.
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	char ch = 'a';

	while  (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

