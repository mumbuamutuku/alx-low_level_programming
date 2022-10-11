#include "dog.h"
#include "stdio.h"
#include "stdlib.h"
/**
*init_dog - function that initialize a variable of type struct dog
*@d: struct dog
*@name: name of dog
*@age: age of the dog
*@owner: owner of the dog
*Return: Always 0 a success
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
