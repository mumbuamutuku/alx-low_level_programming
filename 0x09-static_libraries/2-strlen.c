#include "main.h"
#include <string.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string
 * Return: length of string
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
