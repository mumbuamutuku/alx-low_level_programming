#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: NULL if str = NULL
 * the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; i < str[i]; i++)
	{
		;
	}
	i++;
	copy = malloc(sizeof(char) * i);
	if (copy == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		copy[j] = str[j];
	return (copy);
}
