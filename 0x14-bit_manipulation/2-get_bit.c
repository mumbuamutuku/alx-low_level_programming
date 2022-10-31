#include "main.h"
/**
* get_bit -eturns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 *@n: The number to be printed in binary.
* Return: the value of the bit at index index
*        or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c = 0;

	if (index > 63)
	{
		return (-1);
	}
	while (n > 0)
	{
		if (c == index)
			return (n & 1);
		n = n >> 1;
		c++;
	}
	if (c < index)
		return (0);
	return (-1);
}
