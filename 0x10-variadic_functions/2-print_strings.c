#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *str;

	if (!n)
	{
		putchar('\n');
		return;
	}
	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator)
			if (i != n - 1)
				printf("%s", separator);
	}
	va_end(a);
	putchar('\n');
}
