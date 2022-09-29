/**
 * is_divisible - checks if an integer y is divisible by an integer x.
 * @x: The whose factors is to be determined
 * @y: The number to checked if it is divisible by y
 *
 * Return: If y is divisible by x, 1.
 * Otherwise return 0, or recur...
 */
int is_divisible(int x, int y)
{
	if (y > x / 2)
		return (1);
	else if (x % y == 0)
		return (0);
	else
		return (is_divisible(x, y + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: The number to checked
 *
 * Return: If n is a prime number, 1.
 * Otherwise, return 0.
 */
int is_prime_number(int n)
{
	int f = 2;

	if (n < 2)
		return (0);
	else
		return (is_divisible(n, f));
}
