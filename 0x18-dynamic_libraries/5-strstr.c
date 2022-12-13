#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the longer string to search
 * @needle: the substring to search for
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;
	int count = 0;

	while (needle[count] != '\0')
		count++;
	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
				break;
		}
		if (index != count)
			haystack++;
		else
			return (haystack);
	}

	return (NULL);
}
