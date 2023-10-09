#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers are separated by a space.
 * All numbers are printed with two digits. (e.g., 01, 02, 10, etc.)
 * Combinations of numbers are separated by a comma and space.
 * Combinations are printed in ascending order.
 * For example: "00 01, 00 02, 00 03, ...".
 * 00 01 and 01 00 are considered the same combination of the numbers 0 and 1.
 * You can only use the putchar function (no other functions like printf, puts, etc.).
 * You can only use putchar eight times maximum in your code.
 * No variables of type char are allowed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');  /* Tens digit of num1 */
				putchar((num1 % 10) + '0');  /* Ones digit of num1 */
				putchar(' ');
				putchar((num2 / 10) + '0');  /* Tens digit of num2 */
				putchar((num2 % 10) + '0');  /* Ones digit of num2 */

				if (num1 != 98 || num2 != 99)
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
