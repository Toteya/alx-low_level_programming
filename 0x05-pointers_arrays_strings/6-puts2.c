#include "main.h"

/**
 * puts2 - Prints every other character of a given string
 * @str: Pointer pointing to the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int flag = 1;

	while (*(str + i) != '\0')
	{
		if (flag == 1)
		{
			_putchar(*(str + i));
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	_putchar('\n');
}
