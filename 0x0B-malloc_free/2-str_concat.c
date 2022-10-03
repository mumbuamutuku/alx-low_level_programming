#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: String one
 * @s2: String two
 * Return:  pointer should point to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, lens1 = 0, j, lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/** Get length of s1 **/
	while (s1[lens1] != '\0')
		lens1++;
	/** Get length of s2 **/
	while (s2[lens2] != '\0')
		lens2++;
	str = malloc(sizeof(s1) * (lens1 + lens2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= lens2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
