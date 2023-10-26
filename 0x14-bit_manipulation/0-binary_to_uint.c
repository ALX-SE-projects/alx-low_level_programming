#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 *   there is one or more chars in the string b that is not 0 or 1
 *    b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, j, k;
	int i, slen;

	if (!b)
		return (0);
	slen = strlen(b);
	j = 1;
	for (i = slen - 1; i >= 0; i--)
	{
		k = b[i] - '0';
		if (k != 0 && k != 1)
			return (0);
		res += j * k;
		j *= 2;
	}
	return (res);
}
