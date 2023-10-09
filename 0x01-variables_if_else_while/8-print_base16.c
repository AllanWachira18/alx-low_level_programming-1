#include <stdio.h>

int main() {
    // Loop from 0 to 15 (base 16)
    for (int i = 0; i < 16; i++) {
        // Convert the current number to a lowercase hexadecimal character
        char hex_char = (i < 10) ? ('0' + i) : ('a' + i - 10);

        // Use putchar to print the character
        putchar(hex_char);
    }

    // Use putchar to print a newline character
    putchar('\n');

    return 0;
}
