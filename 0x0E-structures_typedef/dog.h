#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defining a new type of dog data
 * @name: dog name
 * @age: dog age
 * @owner: the name of the dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/*more prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
