#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function given as
 *                   a parameter on each element of an array.
 * @size: is the size of the array
 * @array: - set of array given
 * @action: is a pointer to the function you need to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
