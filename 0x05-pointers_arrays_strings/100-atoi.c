/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string that is to be converted
 *
 * Return: the integer from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int j;
	int n_flag = 0, n_start = 0, n_end = 0, n_len = 0;
	int pow10;
	int sign = -1;
	int count_neg = 0;

	while (*(s + i) != '\0')
	{
		if (n_flag == 0 && (*(s + i) >= '0' && *(s + i) <= '9'))
		/* check if current character in the string is a numerical character */
		{
			n_flag = 1;
			n_start = i;
		}
		else if (n_flag == 1 && !(*(s + i) >= '0' && *(s + i) <= '9'))
		/* check if numerical sub-string has ended */
			break;
		if (*(s + i) == '-')
			count_neg++;
		i++;
		if (n_flag == 1)
			n_end = i;
	}
	n_len = n_end - n_start;
	if (count_neg % 2 == 0)
		sign = 1;
	else
		sign  = -1;
	for (i = n_start; i < n_end; i++)
	{
		pow10 = sign;
		for (j = 1; j < (n_len - (i - n_start)); j++)
			pow10 *= 10;
		num += (*(s + i) - '0') * pow10;
		pow10 = 1;
	}
	return (num);
}











