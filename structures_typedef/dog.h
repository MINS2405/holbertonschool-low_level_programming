#ifndef DOG_H
#define DOG_H

/**
* struct dog - A structure representing a dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*
* Description: This structure defines a dog with its name,
* age, and owner's name.
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

void free_dog(dog_t *d);

#endif
