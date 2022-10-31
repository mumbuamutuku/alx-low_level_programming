#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
*Return: number o bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, b = 0;

	while (flip > 0)
	{
		b += (flip & 1);
		flip >>= 1;
	}
	return (b);
}
