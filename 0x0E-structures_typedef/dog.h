#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: struct for dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
