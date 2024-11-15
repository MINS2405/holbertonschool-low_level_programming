#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
 dog_t *dog;
int i, j;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
if (name != NULL) 
{
for (i = 0; name[i] != '\0'; i++);
dog->name = malloc(i + 1);
if (dog->name == NULL) 
{
free(dog);
return (NULL);
}
for (j = 0; j < i; j++) 
{
dog->name[j] = name[j];
}
dog->name[j] = '\0';
} 
else 
{
dog->name = NULL;
}
if (owner != NULL) 
{
for (i = 0; owner[i] != '\0'; i++);
dog->owner = malloc(i + 1);
if (dog->owner == NULL) 
{
free(dog->name);
free(dog);
return (NULL);
}
for (j = 0; j < i; j++) 
{
dog->owner[j] = owner[j];
}
dog->owner[j] = '\0';
} 
else 
{
dog->owner = NULL;
}

dog->age = age;

return (dog);
}
