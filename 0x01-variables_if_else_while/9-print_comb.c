#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            // Print the first digit
            putchar('0' + i);
            
            // Check if we need to print a separator and space
            if (i != j) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    putchar('\n');

    return 0;
}
