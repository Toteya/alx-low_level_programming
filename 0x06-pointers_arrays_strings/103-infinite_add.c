/**
 * infinite_add - Adds two numbers of any size contained in two strings
 * @n1: Pointer to a string containing a number
 * @n2: Pointer to a second string containing a number
 * @r: Pointer to the buffer string to store the result
 * @size_r: Size of the buffer
 * Return: Pointer to the string containing the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, x, len, carry = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (size_r <= i || size_r <= j)
		return (0);
	len = i;
	if (j > i)
		len = j;
	for (i = i - 1, j = j - 1, k = len - 1; ; i--, j--, k--)
	{
		if ((k < 0 && !carry) || (k < 0 && carry && size_r > len + 1))
			break; /* if k < 0, the string is complete, break infinite loop */
		else if (k < 0 && carry && (size_r <= (len + 1)))
			return (0); /* string is complete but buffer cannot accomodate the carry */
		else if (i < 0 && j >= 0)
			x = *(n2 + j) - 48 + carry;
		else if (i >= 0 && j < 0)
			x = *(n1 + i) - 48 + carry;
		else
			x = *(n1 + i) + *(n2 + j) - 96 + carry;
		*(r + k) = (x % 10) + '0';
		carry = 0;
		if (x >= 10)
			carry = 1;
	}
	if (carry) /* shift the buffer by one place if there's still a carry */
	{
		for (k = len; k >= 0; k--)
			if (k == 0)
				*(r + k) = '1';
			else
				*(r + k) = *(r + k - 1);
	}
	for (k = len + carry; k < size_r; k++)
		*(r + k) = '\0';
	return (r);
}
