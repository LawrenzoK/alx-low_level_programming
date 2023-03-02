#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change all lowercase letters
 * @str: to be returned
 * Return: str
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		*p = toupper(*p);
		p++;
	}
	return (str);
}
