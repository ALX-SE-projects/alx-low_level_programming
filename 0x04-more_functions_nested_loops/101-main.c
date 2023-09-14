#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int INT_MAX, INT_MIN;
    INT_MAX = 2147483647;
    print_number(INT_MAX/INT_MAX);
    _putchar('\n');
    INT_MIN = -2147483648;
    print_number(INT_MIN);
    _putchar('\n');
    return (0);
}
