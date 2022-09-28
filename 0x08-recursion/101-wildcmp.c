#include "main.h"
/**
 * match -  compares two strings 
 * @s1: string one
 * @s2: string two
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int match(char *s1, char *s2)
{
        if (*s1 == '\0' && *s2 == '\0')
            return (1);
    /* Make sure to eliminate consecutive '*' */
        if (*s1 == '*')
        {
            while (*(s1 + 1) == '*')
                s1++;
        }
        /**
         * Make sure that the characters after '*' are present
         * in s2 string. This function assumes that the
         * s1 string will not contain two consecutive '*'
         */
        if (*s1 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
            return (0);
        /**
         * If the s1 string contains '?', or current
         * characters of both strings match
         */
        if (*s1 == '?' || *s1 == *s2)
            return (match(s1 + 1, s2 + 1));
        /**
         * If there is *, then there are two possibilities
         * a) We consider current character of second string
         * b) We ignore current character of s2 string.
         */
        if (*s1 == '*')
            return (match(s1 + 1, s2) || match(s1, s2 + 1));
        return (0);
}
int wildcmp(char *s1, char *s2)
{
    if (match(s1, s2))
        return (1);
    return (0);
}
