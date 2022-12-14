#ifndef DOG_H
#define DOG_H
/**
 * struct dog - creates a dog structure
 * @name: first member
 * @age: creates an age variable
 * @owner: a varaible called owner
 *
 * Description: A srucure declaraion for a main program
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
