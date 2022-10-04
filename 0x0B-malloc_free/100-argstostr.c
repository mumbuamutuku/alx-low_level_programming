#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;
	len += ac + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
