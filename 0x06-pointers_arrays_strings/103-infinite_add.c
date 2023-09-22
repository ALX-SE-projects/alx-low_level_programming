#include <stdio.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int carr;
        int l1;                                                    int l2;
        int maxLen;                                                int i;

        carr = 0;
        l1 = strlen(n1);
        l2 = strlen(n2);
        maxLen = (l1 > l2) ? l1 : l2;

        for (i = 0; i < maxLen; i++)
        {
                int d1;                                                    int d2;
                int sum;
                                                                           d1 = (i < l1) ? (n1[l1 - 1 - i] - '0') : 0;                d2 = (i < l2) ? (n2[l2 - 1 - i] - '0') : 0;                sum = d1 + d2 + carr;                                      r[maxLen - 1 - i] = (sum % 10) + '0';                      carr = sum / 10;                                   }                                                                                                                     if (carr != 0)                                             {                                                                  memmove(r + 1, r, maxLen);                                 r[0] = carr + '0';
                r[maxLen + 1] = '\0';                              }
	return (r);
}
