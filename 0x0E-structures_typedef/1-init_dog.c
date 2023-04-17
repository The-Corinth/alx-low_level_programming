#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable type struct_dog
 * @name: dog name in struct
 * @d: dog age in struct
 * @owner: dog owner name in struct
 * @age: dog age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
