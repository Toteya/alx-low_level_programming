/**
 * rot13 - Encodes a string using rot13 encryption
 * @str: Pointer to a string that is to be encrypted
 *
 * Return: pointer to the encrypted string
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	char ch_enc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch_dec[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		j = 0;
		while (ch_enc[j] != '\0')
		{
			if (*(str + i) == ch_enc[j])
			{
				*(str + i) = ch_dec[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
