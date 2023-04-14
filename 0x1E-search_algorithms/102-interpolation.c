#include "search_algos.h"
/**
* interpolation_search - searches for a value in a sorted array of integers
* using the Jump search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return:  the first index where value is located
* If value is not present in array or if array is NULL, return -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, p;

	if (array == NULL)
		return (-1);

	for (p = 0, h = size - 1; h >= 1;)
	{
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (p < size)
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}
		if (array[p] == value)
			return (p);
		if (array[p] > value)
			h = p - 1;
		else
			l = p + 1;
	}
	return (-1);
}
