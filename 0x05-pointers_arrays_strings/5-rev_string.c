#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string
 * Return: reverse string
 */
void rev_string(char *s)
{
	int len, i;

	len = strlen(s) - 1;

	char *b_ptr, *e_ptr, temp;

	b_ptr = s;
	e_ptr = s;

	for (i = 0; i < len; i++)
		e_ptr++;

	for (i = len; i >= 0; i++)
		_putchar(s[i]);
	_putchar('\n');
}
