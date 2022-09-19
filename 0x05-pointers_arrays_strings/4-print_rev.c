#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string
 * Return: reverse string
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s) - 1;
	for (i = len; i >= 0; i++)
		_putchar(s[i]);
	_putchar('\n');
}
