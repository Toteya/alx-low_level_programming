/**
 * cap_string - Capitalises each word of a string
 * @s: pointer to a string whose words are to be capitalised
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	char s_ch[] = {' ', '\n', '\t', '.'};
	int i = 0;
	int j;
	int s_len;

	while (s_ch[i] != '\0')
	{
		i++;
	}
	s_len = i;
	i = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < s_len; j++)
		{
			if (i == 0 || *(s + i - 1) == s_ch[j])
			{
				if (*(s + i) >= 'a' && *(s + i) <= 'z')
					*(s + i) -= 32;
			}
		}
		i++;
	}
	return (s);
}
