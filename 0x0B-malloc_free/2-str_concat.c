#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 */
char *str_concat(char *s1, char *s2)
{
    char *str;
    int i, len = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    while (s1[i++])
		len++;
    for (i = 0; s2[i]; i++)
		s1[len++] = s2[i];
	return (s1);

    for (i = 0; i < s2[i]; i++)
        len++;
    str = malloc (sizeof(char)) * (len + 1);

    return (str);
}