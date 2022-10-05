#include "main.h"
#include <stdlib.h>
/**
 * copychars - copies char to buffer
 * @b: destination buffer
 * @start: start char pointer
 * @stop: ending char pointer
 */
void copychars(char *b, char *start, char *stop)
{
	while (start <= stop)
		*b++ = *start++;
	*b = 0;
}
/**
 * wordcount - counts number of words
 * @str: the sendtence
 * Return: int nnumber of wordss
 */
int wordcount(char *str)
{
	int words = 0, in_word = 0;

	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (in_word)
				words++;
			in_word = 0;
			if (!*str)
				break;
		}
		else
			in_word++;
		str++;
	}
	return (words);
}
/**
 * strtow - splits sentence into words
 * @str: the sentence string
 * Return: pointer to string array
 */

char **strtow(char *str)
{
	int words = 0, in_word = 0;
	char **p, *word_start;

	if (!str || !*str || !wordcount(str))
		return (NULL);
	p = malloc(sizeof(char *) * (wordcount(str) + 1));
	while (1)
	{
		if (*str == ' ' || !*str)
		{
			if (in_word)
			{
				p[words] = malloc(sizeof(char) * (in_word + 1));
				if (!p[words])
				{
					return (NULL);
				}
			       copychars(p[words], word_start, str - 1);
			       words++;
				in_word = 0;
			}
			if (!*str)
				break;
		}
		else
		{
			if (!in_word++)
				word_start = str;
		}
		str++;
	}
	p[words] = 0;
	return (p);
}
