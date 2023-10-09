#include <stdio.h>

int main() {
    int i = 0;

    putchar('0');

    for (i = 1; i < 10; i++) {
        putchar(',');
        putchar(' ');
        putchar('0' + i);
    }

    putchar('\n');

    return 0;
}
