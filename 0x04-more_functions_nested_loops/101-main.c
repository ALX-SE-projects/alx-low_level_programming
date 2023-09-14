#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;

    for (i = -1000; i <= 1000; i++)
    {
        print_number(i);
        _putchar('\n');
    }
    return (0);
}
