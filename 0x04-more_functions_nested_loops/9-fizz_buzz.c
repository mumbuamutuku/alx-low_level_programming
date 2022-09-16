#include "main.h"
/**
 * main - start
 * fizz_buzz -program that prints the numbers from 1 to 100,
 * main - entry point
 * followed by a new line.
 * Return:  the numbers
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");
		else if ((n % 5) == 0)
			printf("Buzz");
		else if ((n % 3) == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
