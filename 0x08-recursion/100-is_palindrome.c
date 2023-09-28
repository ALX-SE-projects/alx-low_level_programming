#include "main.h"
/**
 * strln - get str len
 * Return: int
 * @s: str
 */
int strln(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + strln((char *) (s + 1)));
}
/**
 * is_same - chk if str is mirrored from @i
 * Return: bool
 * @s: string
 * @n: str len
 * @i: padding chars
 */
int is_same(char *s, int n, int i)
{
	int mid, i1, i2;

	mid = (n / 2) - 1;
	i1 = i;
	i2 = n - 1 - i;

	if (i1 == mid)
		return (s[i1] == s[i2]);
	else
		return ((s[i1] == s[i2]) && is_same(s, n, i + 1));
}
/**
 * is_same_odd - chk if str is mirrored from @i
 * Return: bool
 * @s: string
 * @n: str len (must be odd)
 * @i: padding chars
 */
int is_same_odd(char *s, int n, int i)
{
	int mid, i1, i2;

	mid = (n - 1) / 2;
	i1 = i;
	i2 = n - 1 - i;

	if (i1 == mid && i2 == mid)
		return (1);
	else
		return ((s[i1] == s[i2]) && is_same(s, n, i + 1));
}
/**
 * is_palindrome - chk if str is mirrored
 * Return: boolean int
 * @s: str
 */
int is_palindrome(char *s)
{
	int ln;

	ln = strln(s);
	if (ln == 0 || ln == 1)
		return (1);
	else if (ln % 2)
		return (is_same_odd(s, ln, 0));
	else
		return (is_same(s, ln, 0));
}
