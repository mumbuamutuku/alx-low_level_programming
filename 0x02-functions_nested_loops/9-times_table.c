#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: results
 */
void times_table(void)
{
	int x, y, res;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');

			res = x * y;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
