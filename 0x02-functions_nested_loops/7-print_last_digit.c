#include "main.h"
/**
* print_last_digit - prints the last digit of a number.
*
*@k: -the number
*
* Return: the value of the last digit
*
*/

int print_last_digit(int k)
{
	int lastdgt;

	lastdgt = k % 10;
	if (lastdgt < 0)
		lastdgt *= -1;
		_putchar(lastdgt + '0');
	return (lastdgt);
}
