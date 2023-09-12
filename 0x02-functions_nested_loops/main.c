#include <stdio.h>

void putint(long int num) {
    if (num < 0) {
        putchar('-');
        num = -num;
    }

    if (num / 10) {
        putint(num / 10);
    }

    putchar(num % 10 + '0');
}

int main() {
    long int number = 1234567890;
    putint(number);
    return 0;
}
