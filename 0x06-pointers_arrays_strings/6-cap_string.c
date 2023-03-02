#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize all words of string
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int cap_next = 1;
	char *p = s;

	while (*p)
	{
		if (cap_next && islower(*p))
			*p = toupper(*p);
		cap_next = isspace(*p) || *p == ',' || *p == ';' ||
			*p == '.' || *p == '!' || *p == '?' ||
			*p == '"' || *p == '(' || *p == ')' ||
			*p == '{' || *p == '}';
		p++;
	}

	return (s);
}
