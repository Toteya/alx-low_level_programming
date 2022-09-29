#include <stdio.h>

/**
 * str_len - Returns the length of a string
 * @str: The string whose length is to be returned
 *
 * Return: The length of the string
 */
int str_len(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + str_len(str + 1));
}

/**
 * check_palindrome - checks if a string a palindrome
 * @a: pointer to the beginning of the string
 * @b: pointer to the end of the string
 *
 * Return: If string is a palindrome, 1.
 * otherwise, return 0.
 */
int check_palindrome(char *a, char *b)
{
	if (a < b)
	{
		if (*a == *b)
			return (check_palindrome(a + 1, b - 1));
		else
			return (0);
	}
	else
		return (1);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to a string that is to be checked
 *
 * Return: If the string is a palindrome, 1.
 * otherwise, return 0.
 */
int is_palindrome(char *s)
{
	int len = str_len(s);

	if (len == 0)
		return (1);
	else
		return (check_palindrome(s, s + len - 1));
}
