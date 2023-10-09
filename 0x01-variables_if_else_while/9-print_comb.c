#include <stdio.h>

int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit + '0'); // Convert digit to character and print
        if (digit < 9)
        {
            putchar(','); // Print comma
            putchar(' '); // Print space
        }
        digit++;
    }

    putchar('\n'); // Print a newline character

    return (0);
}
