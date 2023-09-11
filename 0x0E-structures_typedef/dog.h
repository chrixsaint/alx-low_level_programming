#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Definess a new type struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
 *
 * Description: A new type struct dog that contains
 * the dog's name (a character string), the dog's age (a float),
 * and the owner's name (a character string).
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 *
 * Description: A new type dog_t as a new name for the type struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
