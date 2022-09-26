#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @src: pointer to the source of data to be copied
 * @dest: pointer to the destination array where the content is to be copied
 * @n: the number of bytes to be copied.
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
