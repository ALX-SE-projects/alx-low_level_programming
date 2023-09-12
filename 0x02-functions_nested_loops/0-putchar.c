#include "main.h"

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
    char *string;
    int i;

    string = "_putchar\n";
    i = 0;
    while (1)
    {
        char c;

        c = string[i];
        if (c == '\0')
            break;
        _putchar(c);
        i++;
    }
    return 0;
}
