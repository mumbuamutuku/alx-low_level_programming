#include "main.h"
/**
 * reverse_array -a function that reverses the content of an array of integers.
 * @a: array
 * @n: is the number of elements of the array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int aux[], i;

	for (i = 0; i < n; i++)
		aux[n - 1 - i] = a[i];
	for (i = 0; i < n; i++)
		a[i] = aux[i];
}
