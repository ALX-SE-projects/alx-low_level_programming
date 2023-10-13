#include <stdarg.h>
/**
 * sum_them_all - get sum of all its parameters
 * @n: number of args
 * Return: sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list a;

	if (!n)
		return (n);

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}
	va_end(a);
	return (sum);
}
