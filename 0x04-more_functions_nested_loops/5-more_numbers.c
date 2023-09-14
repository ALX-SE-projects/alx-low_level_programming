#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by \n
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar('0' + ((i - (i % 10)) / 10));
		}
		_putchar('0' + (i % 10));
	}
	_putchar('\n');
}
