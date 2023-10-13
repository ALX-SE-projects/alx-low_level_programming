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
	char c, next_c;
	char *str;

	va_start(a, format);
	while (*(format + idx))
	{
		c = *(format + idx);
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
				printf("%s", str == NULL ? str : "(nil)");
				break;
		}
		next_c = *(format + idx + 1);
		if (next_c == 'c' || next_c == 'i' || next_c == 'f' || next_c == 's')
			printf("%s", ", ");
		idx++;
	}
	putchar('\n');
}
