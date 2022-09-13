#include "mumbua.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line
 *
 * Return: Always 0.
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int h;

	for (h = 0; h <= 9; h++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar (ch);
		_putchar('\n');
	}
}
