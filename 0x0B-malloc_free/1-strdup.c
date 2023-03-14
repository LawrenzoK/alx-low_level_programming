#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	for (len2 = 0; s2[len2] != '\0'; len2++)

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		new_str[i + j] = s2[j];
	}
	new_str[i + j] = '\0';

	return (new_str);
}
