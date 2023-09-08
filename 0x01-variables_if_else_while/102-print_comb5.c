#include <stdio.h>

/**\
 * main - entry point
 */
int main(void)
{
	int i, j, k, x;
	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (x = '0'; x <= '9'; x++)
				{
					if (k > i || (k == i && x > j))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(x);
						if (i == '9' && j == '8' && k == '9' && x == '9')
							goto end;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	end:
	putchar('\n');
	return (0);
}
