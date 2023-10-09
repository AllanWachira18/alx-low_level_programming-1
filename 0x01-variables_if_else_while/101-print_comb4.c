#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of four digits.
 * Numbers must be separated by ', ' followed by a space.
 * The four digits must be different.
 * 0123, 0132, 0213, 0231, 0312, 0321, 1023, 1032, 1203, 1230, 1302, 1320,
 * 2013, 2031, 2103, 2130, 2301, 2310, 3012, 3021, 3102, 3120, 3201, 3210
 * are considered the same combination of the four digits 0, 1, 2, and 3.
 * Print only the smallest combination of four digits.
 * Numbers should be printed in ascending order, with four digits.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
 * You can only use putchar six times maximum in your code.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(',');
					putchar(' ');
					putchar(c + '0');
					if (a != 9 || b != 8 || c != 7 || d != 6)
					{
						putchar(d + '0');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
