#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int xx, ssss;
	int n;
	int pass[100];

	srand(time(NULL));
	ssss = 0;
	for (xx = 0; xx < 100; ++xx)
	{
		pass[xx] = rand() % 78;
		ssss += (pass[xx] + '0');
		putchar(pass[xx] + '0');
		if ((2772 - ssss) - '0' < 78)
		{
			n = 2772 - ssss - '0';
			ssss += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
