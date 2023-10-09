#include <stdio.h>

int main() {
    char digit = '0';

    while (digit <= '9') {
        putchar(digit);

        if (digit != '9') {
            putchar(',');
            putchar(' ');
        }

        digit++;
    }

    putchar('\n');

    return 0;
}
