#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: struct of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog_t  dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif