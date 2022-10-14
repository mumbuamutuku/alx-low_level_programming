#include "variadic_functions.h"
/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: numbers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list nums;

	va_start(nums, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
