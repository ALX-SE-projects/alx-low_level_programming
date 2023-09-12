#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

char[MAX_DIGITS + 1] sumLargeIntegers(char num1[], char num2[]) {
    char result[MAX_DIGITS + 1];
    int carry = 0;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = (len1 > len2) ? len1 : len2;

    for (int i = 0; i < maxLen; i++) {
        int digit1 = (i < len1) ? (num1[len1 - 1 - i] - '0') : 0;
        int digit2 = (i < len2) ? (num2[len2 - 1 - i] - '0') : 0;

        int sum = digit1 + digit2 + carry;
        result[maxLen - 1 - i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (carry != 0) {
        memmove(result + 1, result, maxLen);
        result[0] = carry + '0';
        result[maxLen + 1] = '\0';
    }
    return result;
}

int main() {
    char num1[MAX_DIGITS] = "7540113804746346429";
    char num2[MAX_DIGITS] = "12200160415121876738";



    printf("Sum: %s\n", sumLargeIntegers(num1, num2, result));

    return 0;
}
