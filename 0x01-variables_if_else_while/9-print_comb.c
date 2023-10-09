#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 9; i++) {
        putchar('0' + i);
        putchar(',');
        putchar(' ');
    }

    putchar('9');
    putchar('\n');

    return 0;
}
