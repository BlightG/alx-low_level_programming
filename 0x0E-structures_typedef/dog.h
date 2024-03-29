#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
/**
 *struct dog - data for dog
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner name
 *
 * Description: longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
