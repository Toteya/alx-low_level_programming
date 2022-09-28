/**
 * _strlen_recursion - Finds the length of a string
 * @s: Pointer to a string whose length is to be obtained
 *
 * Return: The length of the string s in bytes
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + (_strlen_recursion(s + 1)));
}
