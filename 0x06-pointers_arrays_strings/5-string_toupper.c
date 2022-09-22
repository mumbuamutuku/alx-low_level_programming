#include "main.h"
/**
<<<<<<< HEAD
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * Return: uppercase
 */
char *string_toupper(char *str)
 {
        int i;
        
        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = (int)str[i] - 32;
        }
        return (str);
}
=======
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the string to change
 * Return: uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (int)str[i] - 32;
	}
	return (str);
}
>>>>>>> 9613e562eb6a4aba53fc4a5a17f1ff707577e5ea
