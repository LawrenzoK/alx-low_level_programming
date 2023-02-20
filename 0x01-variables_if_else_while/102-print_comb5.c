#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, firstDigit_i, secondDigit_i, firstDigit_j, secondDigit_j;

	for (i = 0; i <= 99; i++)
	{
		firstDigit_i = i / 10;
		secondDigit_i = i % 10;
			for (j = i; j <= 99; j++)
			{
				firstDigit_j = j / 10;
				secondDigit_j = j % 10;
				if (i != j)
				{
					putchar('0' + firstDigit_i);
					putchar('0' + secondDigit_i);
					putchar(' ');
					putchar('0' + firstDigit_j);
					putchar('0' + secondDigit_j);
					if (i != 99 || j != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	}
	putchar('\n');

	return (0);
}
