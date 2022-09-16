#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Do not print 2 and 4
 * Return: numbers
 */
void print_most_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar((i % 10) + '0');
		i++;
	}
	_putchar('\n');
}
