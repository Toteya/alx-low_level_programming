/**
 * leet - Encodes a string to 1337.
 * @str: pointer to a string that is to be encoded.
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char ch_l[] = "aeotl";
	char ch_u[] = "AEOTL";
	char ch_n[] = "43071";

	while (*(str + i) != '\0')
	{
		j = 0;
		while (ch_l[j] != '\0')
		{
			if (*(str + i) == ch_l[j] || *(str + i) == ch_u[j])
			{
				*(str + i) = ch_n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
