#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, firstDigit_i, secondDigit_i;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int firstDigit_i = i / 10;
			int secondDigit_1 = i % 10;
			int firstDigit_j = j / 10;
			int secondFigit_j = j % 10;

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

	return (0);
}
