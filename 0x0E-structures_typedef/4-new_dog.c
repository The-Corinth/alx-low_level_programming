#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: parameter for name
 * @age: parameter for age
 * @owner:parameter for owner
 * Return: NULL if functions fails and pointer if succes
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		if (new_dog->name != NULL)
		       free(new_dog->name);
		if (new_dog->owner != NULL)
			free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
