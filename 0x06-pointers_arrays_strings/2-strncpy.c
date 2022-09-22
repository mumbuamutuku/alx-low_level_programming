#include "main.h"
/**
 * _strncpy -function that copies a string.
 * @dest: - string one
 * @src: - string two
 * @n: number of bytes
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (NULL == src || NULL == dest)
		return (NULL);
	while (src[i] != '\0')
		i++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
