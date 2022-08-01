#include "dog.h"
/**
* init_dog - initalizes structure of dog
*
* @d: pointer to struct
* @name: first data point of structure
* @age: second  "     "    "    "
* @owner: third  "    "    "    "i
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    strcpy(new_dog->name, name);
    new_dog->age = age;
    strcpy(new_dog->owner, owner);
}