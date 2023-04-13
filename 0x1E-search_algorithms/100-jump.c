#include "search_algos.h"
/**
* jump_search - searches for a value in a sorted array of integers
* using the Jump search algorithm
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return:  the first index where value is located
* If value is not present in array or if array is NULL, return -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t k, jmp, stp;

	if (array == NULL || size == 0)
		return (-1);

	stp = sqrt(size);
	for (k = jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		k = jmp;
		jmp += stp;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; k < jmp && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
}
