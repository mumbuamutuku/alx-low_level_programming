#include "main.h"

/**
 * _strcat -function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * @dest: - string one
 * @src: - string two
 * Return: -the concated string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, j = 0;

	while (dest[j++])
		len++;

	for (j = 0; src[j]; j++)
		dest[len++] = src[j];
	return (dest);
}
