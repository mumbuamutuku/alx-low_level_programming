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

	char temp;

	for (i = len; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
	_putchar('\n');
}
