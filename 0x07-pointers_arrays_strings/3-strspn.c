#include "main.h"
#include <string.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: segment to return bytes from
 * @accept: the bytes to include
 * Return:  the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;
       unsigned int count = 0;
	for (index = 0; index < strlen(accept); index++)
	{
		if (count == strlen(s))
			break;
		if (accept[index] == s[count])
			count++;
	}
	return (count);
}
