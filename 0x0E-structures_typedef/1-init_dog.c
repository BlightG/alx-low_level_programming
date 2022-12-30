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
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
