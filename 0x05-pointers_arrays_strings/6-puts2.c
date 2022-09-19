#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: characters priinted
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
}
