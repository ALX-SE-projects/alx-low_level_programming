/**
 * flip_bits - returns the number of bits you would
 *   need to flip to get from one number to another.
 * @n: num 1
 * @m: num 2
 *
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r = 0;
	unsigned long int i, j, k;

	for (i = 0; i < sizeof(n) * 8; i++)
	{
		j = n & (1 << i);
		k = m & (1 << i);
		if (!((j && k) || ((!j) && (!k))))
			r++;
	}
	return (r / 2);
}
