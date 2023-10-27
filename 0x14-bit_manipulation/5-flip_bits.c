/**
 * get_sizeofff - find the len of @n
 * @n: value to find its len
 *
 * Return: len
*/
unsigned int get_sizeofff(unsigned long int n)
{
	unsigned int s = 0;

	while (n > 0)
	{
		s++;
		n >>= 1;
	}
	s--;
	return (s);
}
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
	unsigned int r = 0, i, max;
	unsigned int ln, lm;

	ln = get_sizeofff(n);
	lm = get_sizeofff(m);
	if (ln > lm)
		max = ln;
	else
		max = lm;
	n ^= m;
	for (i = 0; i <= max; i++)
	{
		if (n & (1 << i))
			r++;
	}
	return (r);
}
