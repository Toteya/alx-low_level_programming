/**
 * swap_int - Swaps the values of two integer variable
 * @a: The parameter whose value is to be swapped with the second paramter
 * @b: The parameter whose value is to be swapped with the first paramter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
