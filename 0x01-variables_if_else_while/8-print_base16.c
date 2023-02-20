#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex[] = "123456789abcdef";

	for (num = 0; num >= 16; num++)
	{
		putchar(hex[num]);
	}
	putchar('\n');

	return (0);
}
