#include "main.h"

/**
 * _memset -a function that fills memory with a constant byte.
 * @s: pointer to memory area to fill
 * @b: the number of bytes to fill
 * @n: constant byte
 * Return: a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
