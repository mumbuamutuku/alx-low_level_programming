#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int len = 0, index = 0, j = 0, words = 0, wordlen = 0;
	char **p;
	int w, l, m = 0;
	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
<<<<<<< HEAD
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
=======
	return (len);
}
/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int j = 0, words = 0, wordlen = 0;

	for (j = 0; *(str + j); j++)
		wordlen++;
	for (j = 0; j < wordlen; j++)
	{
		if (*(str + j) != ' ')
		{
			words++;
			j += word_len(str + j);
		}
	}
	return (words);
}
/**
 * strtow - unction returns a pointer to an array of strings (words
 * @str: string;
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **p;
	int w, m = 0, l, words, letters;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	p = malloc(sizeof(char) * (words + 1));
	if (p == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[m] == ' ')
			m++;
		letters = word_len(str + m);
		p[w] = malloc(sizeof(char) * (letters + 1));
		if (p[w] == NULL)
		{
			for (; w >= 0; w--)
>>>>>>> 3521d4480aeab27d941deab339d7a94aa3fd7436
				free(p[w]);
			free(p);
			return (NULL);
		}
<<<<<<< HEAD
		for(l = 0; l < words; l++)
=======
		for (l = 0; l < letters; l++)
>>>>>>> 3521d4480aeab27d941deab339d7a94aa3fd7436
			p[w][l] = str[m++];
		p[w][l] = '\0';
	}
	p[w] = NULL;
	return (p);
}
