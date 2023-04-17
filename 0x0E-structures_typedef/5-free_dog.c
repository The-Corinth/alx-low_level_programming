#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dog
 * @d: pointer
 * Return: no value returned
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
