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
	unsigned int r = 0, i;

	n ^= m;
	for (i = 0; i < 32; i++)
	{
		if (n & (1 << i))
			r++;
	}
	return (r);
}
