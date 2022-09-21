/**
 * string_toupper - Replace all lowercase letters in a string to uppercase
 * @str: pointer to the string whose letters are to be replaced
 *
 * Return: pointer to modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}
