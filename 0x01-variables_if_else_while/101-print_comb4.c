#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits.
 * Numbers must be separated by ', ' followed by a space.
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1, and 2.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 * You can only use the putchar function (every other function like printf, puts, etc. is forbidden).
 * You can only use putchar six times maximum in your code.
 * No variables of type char are allowed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2, num3;

    for (num1 = 0; num1 <= 7; num1++)
    {
        for (num2 = num1 + 1; num2 <= 8; num2++)
        {
            for (num3 = num2 + 1; num3 <= 9; num3++)
            {
                putchar(num1 + '0');
                putchar(num2 + '0');
                putchar(num3 + '0');

                if (num1 != 7 || num2 != 8 || num3 != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}
