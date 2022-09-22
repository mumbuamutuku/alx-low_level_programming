#include "main.h"
/**
 * _strncat - function is similar to the _strcat function, except that 
 * it will use at most n bytes from src; and -
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: - string one
 * @src: - string two
 * @n: number of bytes
 * Return: - a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int len = 0, i = 0;

    while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}