#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: start integer
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	/**
	*for (i = 0; i < n; i++)
	*	sum += va_arg(ap, int);
	*va_end(ap);
	*/
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}
