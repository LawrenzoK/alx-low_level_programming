#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
        char *concat_str;
        int s1_len = 0, s2_len = 0, i, j;

        if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }

        /* calculate the lengths of s1 and s2 */
        while (s1[s1_len] != '\0')
        {
                s1_len++;
        }
        while (s2[s2_len] != '\0')
        {
                s2_len++;
        }

        /* allocate memory for the concatenated string */
        concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));
        if (concat_str == NULL)
        {
                return (NULL);
        }

        /* copy s1 and s2 into the new string */
        for (i = 0; i < s1_len; i++)
        {
                concat_str[i] = s1[i];
        }
        for (j = 0; j < s2_len; j++)
        {
                concat_str[i + j] = s2[j];
        }

        /* add null terminator to end of string */
        concat_str[i + j] = '\0';

        return (concat_str);
}
