#include "main.h"
/**
 * reverse_array -a function that reverses the content of an array of integers.
 * @a: array
 * @n: is the number of elements of the array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int aux, i;

	for (i = n - 1; i >= n / 2; i--)
		aux = a[n - 1 - i]; 
		a[n - 1 - i] = a[i];
		a[i] = aux;
	return (0);
}
