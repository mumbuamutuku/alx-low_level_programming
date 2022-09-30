#include <stdio.h>
#include "main.h"
/**
 * main
 * Return: 0
 */
int main (void)
{
	int a, b, c;
	int l;

	a = 9277;
	c = 0;
	b = -98;

	l = largest_number(a, b, c);

	printf("%d is the largest number\n", l);

	return (0);
}
