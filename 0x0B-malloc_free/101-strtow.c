#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - unction returns a pointer to an array of strings (words
 * @str: string;
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int len = 0, index = 0, j = 0, words = 0, wordlen = 0;
	char **p;
	int w, l, m = 0;
	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	for (j = 0; *(str + index); j++)
		wordlen++;
	for (j = 0; j < wordlen; j++)
	{
		if(*(str + j) != ' ')
		{
			words++;
			j += len + 1;
		}
	}
	if (str == NULL || str[0] == '\0')
		return (NULL);
	if (words == 0)
	       	return (NULL);
	p = malloc(sizeof(char) * (words + 1));
	if (p == NULL)
		return (NULL);
	for(w = 0; w < words; w++)
	{
		while (str[m] == ' ')
			m++;
		p[w] = malloc(sizeof(char) * (len + 1));
		if (p[w] == NULL)
		{
			for(; w >= 0; w--)
				free(p[w]);
			free(p);
			return (NULL);
		}
		for(l = 0; l < words; l++)
			p[w][l] = str[m++];
		p[w][l] = '\0';
	}
	p[w] = NULL;
	return (p);
}
