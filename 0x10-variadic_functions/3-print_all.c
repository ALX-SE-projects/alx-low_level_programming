#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function;
 */
void print_all(const char * const format, ...)
{
	va_list a;
	unsigned int idx = 0;
	char c;
	char *str;

	if (!format)
	{
		putchar('\n');
		return;
	}

	va_start(a, format);
	while (*(format + idx))
	{
		c = *(format + idx);
		if ((c == 'c' || c == 'i' || c == 'f' || c == 's') && idx)
			printf("%s", ", ");
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(a, int));
				break;
			case 'i':
				printf("%d", va_arg(a, int));
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				break;
			case 's':
				str = va_arg(a, char *);
				printf("%s", str ? str : "(nil)");
				break;
		}
		idx++;
	}
	putchar('\n');
}
