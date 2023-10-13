#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	if (!n)
	{
		putchar('\n');
		return;
	}
	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (separator)
			if (i != n - 1)
				printf("%s", separator);
	}
	va_end(a);
	putchar('\n');
}
