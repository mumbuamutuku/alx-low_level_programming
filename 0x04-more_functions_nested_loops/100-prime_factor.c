#include <stdio.h>
/**
 * main - Finds and prints the largest prime
 * factor of the number 612852475143.
 * Return: Always 0.
 */
int main(void)
{
	long pr = 612852475143, d;

	while (d < (pr / 2))
	{
		if ((pr % 2) == 0)
		{
			pr /= 2;
			continue;
		}
		for (d = 3; d < (pr / 2) ; d += 2)
		{
			if ((pr % d) == 0)
				pr /= d;
		}
	}
	printf("%ld\n", pr);
	return (0);
}
