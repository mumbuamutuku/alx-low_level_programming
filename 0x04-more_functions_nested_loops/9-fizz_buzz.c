#include "main.h"
/**
 * fizz_buzz -program that prints the numbers from 1 to 100,
 * followed by a new line.
 * Return:  the numbers
 */
void fizz_buzz(void)
{
	for (int n = 1; n <= 100; n++)
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
}
int main(void)
{
	fizz_buzz();
	return (0);
}
