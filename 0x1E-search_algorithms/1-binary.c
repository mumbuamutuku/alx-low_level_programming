#include "search_algos.h"
/**
* binary_search - searches for a value in a sorted array of integers
* using the Binary search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: return the index where value is located
*	If value is not present in array or if array is NULL, return -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t k, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (k = l; k < r; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);

		k = l + (r - l) / 2;
		if (array[k] == value)
			return (k);
		if (array[k] > value)
			r = k - 1;
		else
			l = k + 1;
	}
	return (-1);
}
