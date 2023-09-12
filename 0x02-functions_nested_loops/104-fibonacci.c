#include "main.h"
#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

void sumLargeNums(char n1[], char n2[], char r[]) {
    int carr = 0;
    int l1 = strlen(n1);
    int l2 = strlen(n2);
    int maxLen = (l1 > l2) ? l1 : l2;

    for (int i = 0; i < maxLen; i++) {
        int d1 = (i < l1) ? (n1[l1 - 1 - i] - '0') : 0;
        int d2 = (i < l2) ? (n2[l2 - 1 - i] - '0') : 0;

        int sum = d1 + d2 + carr;
        r[maxLen - 1 - i] = (sum % 10) + '0';
        carr = sum / 10;
    }

    if (carr != 0) {
        memmove(r + 1, r, maxLen);
        r[0] = carr + '0';
        r[maxLen + 1] = '\0';
    }
}
/**
 * putint - prints an int
 * @n: int to print
 */
void putint(unsigned long int n)
{
	if (n / 10)
	{
		putint(n / 10);
	}
	putchar(n % 10 + '0');
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int counter;
	char i[MAX_DIGITS] = "1";
	char j[MAX_DIGITS] = "2";
	printf("%s, ", i);
	printf("%s, ", j);
	counter = 2;
	while (1)
	{
		char k[MAX_DIGITS + 1];

		sumLargeNums(i, j, k);
		strcpy(i, j);
		strcpy(j, k);
		printf("%s", k);
		counter++;
		if (counter != 98)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
