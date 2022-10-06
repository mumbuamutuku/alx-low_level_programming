#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: Strng one
 * @s2: string two
 * @n: number of bytes
 * Return:  pointer shall point to a newly allocated space in memory, 
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int len = 0, i = 0;
    char *p;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = ""; 
    while (s1[i++])
		len++;
    p = malloc(sizeof(char) * (len +1));
    if (p == NULL)
        return (NULL);
    len = 0;
	for (i = 0; s2[i] && i < n; i++)
		s1[len++] = s2[i];
    p == s1;
	return (p);
}