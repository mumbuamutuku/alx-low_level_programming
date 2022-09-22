#include "main.h"
/**
 * _strcmp -a function that compares two strings.
 * @s1: -String 1
 * @s2: -String 2
 * Return: <0 if s<t, 0 if s==t, >0 if s>t
 */
int _strcmp(char *s1, char *s2)
{
    int i;
    for (i = 0; s1[i] == s2[i]; i++)
        if (s1[i] == '\0')
            return 0;
    return s1[i] - s2[i];
}