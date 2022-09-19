/**
 * rev_string - reverses value of a given string variable
 * @s: Pointer to the string variable whose value is to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	int len;
	char c;

	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;

	for (i = 0, j = len - 1; j >= (len / 2); i++, j--)
	{
		c = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = c;
	}
}
