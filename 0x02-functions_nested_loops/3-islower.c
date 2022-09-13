/**
 * _islower - Checks if character is lowercase
 * @ch: character to be checked
 *
 * Return: 1 if lowercase
 * returns 0 otherwise
 */
int _islower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
