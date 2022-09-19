#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string
 * Return: reverse string
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = strlen(s);
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - i - 1] = temp;
	}
}
