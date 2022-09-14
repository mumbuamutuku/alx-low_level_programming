#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 * @h: - the integer to be tested
 *
 * Return: 0 always
 */
int _abs(int h)
{
	if (h < 0)
	{
		int k = h * -1;

		printf("%d ", k);
	}
	else
	{
		printf("%d ", h);
	}
}
