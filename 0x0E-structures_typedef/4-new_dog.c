#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to newly allocated space
*@str: string
*Return: pointer to newly allocated space
*/
char *_strdup(char *str)
{
	int len, i;
	char *ar;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	ar = (char *) malloc((len + 1) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar); 
}
/**
*new_dog - creates a new dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*Return: dog
*NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogf;
	char *dog_name, *dog_owner;
	dogf = malloc(sizeof(dog_t));
	if (dogf == NULL)
		return (NULL);
	dog_name = _strdup(name);
	if (dog_name == NULL)
	{
		free(dogf);
		return (NULL);
	}
	dog_owner = _strdup(owner);
	{
		free(dog_name);
		free(dogf);
		return (NULL);
	}
	dogf->name = dog_name;
	dogf->age = age;
	dogf->owner = dog_owner;
	return dogf;
}
