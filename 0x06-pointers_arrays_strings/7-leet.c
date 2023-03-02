#include "main.h"

/**
 * leet - encodes a string
 * @str: string to encode
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_subs = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_subs[j];
				break;
			}
		}
	}
	return (str);
}
