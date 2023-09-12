#include "main.h"
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(-2147483648);
    putchar('\n');
    return (0);
}

int print_last_digit(int n)
{
	n = n % 10;
    if (n < 0)
	{
		n = n * -1;
	}
	putchar(n + '0');
	return (n);
}

