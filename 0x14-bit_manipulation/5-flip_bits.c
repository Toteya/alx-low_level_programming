/**
 * flip_bits - Returns the number of bits required to be flipped to get
 * from one number to another.
 * @n: The number to be changed.
 * @m: The number to change to.
 *
 * Return: The number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nn, mm, pow = 1;
	int i, bitC = 0;
	unsigned int flips = 0;

	nn = n;
	mm = m;
	while (nn > 1)
	{
		nn = nn >> 1;
		bitC++;
	}
	nn = n;
	for (; bitC >= 0; bitC--)
	{
		for (i = 0; i < bitC; i++)
		{
			nn = nn >> 1;
			mm = mm >> 1;
			pow *= 2;
		}
		if (nn != mm)
			flips++;
		if (nn)
			n = n - pow;
		nn = n;
		if (mm)
			m = m - pow;
		mm = m;
		pow = 1;
	}
	return (flips);
}
