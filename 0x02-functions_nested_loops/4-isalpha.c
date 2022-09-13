/**
 * _isalpha - Checks if a letter is an alphabetic character
 * @ch: character to be checked
 *
 * Return: if ch is alphabetic character 1
 * otherwise returns 0.
 */
int _isalpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
