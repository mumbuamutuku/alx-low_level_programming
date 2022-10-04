#include "main.h"
/**
 * strtow - unction returns a pointer to an array of strings (words
 * @str: string;
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int len = 0, i;
	char *p;
	char del[] = "";
	int index = 0, totalwords = 0;
	int *wordindex = 0;

	if (str == NULL || str == "")
		return (NULL);
	
	while (str[len] != '\0')
		len++;
	
	p = malloc(sizeof(char) * (len + 1));
	
	for(index = 0; index <= len; index++)
	{
		if (str[index] == ' ' || str[index] == '\0')
		{
			p[totalwords][wordindex] = '\0';
			totalwords++;
			wordindex = 0;
		}
		else
		{
			p[totalwords][wordindex] = str[index];
			wordindex++;
		}
		
	}
	for (index = 0; index < totalwords; i++)
	{
		return (p[index]);
	}
	return (0);
	
}
