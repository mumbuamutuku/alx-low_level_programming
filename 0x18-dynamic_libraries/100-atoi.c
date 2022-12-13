#include "main.h"

/**
 * _atoi -a function that convert a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int n;

	n = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * sign);
}
