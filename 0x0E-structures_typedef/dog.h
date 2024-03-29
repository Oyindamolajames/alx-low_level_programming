#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that represents a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This struct represents a dog with a name, age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define dog_t as an alias for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
