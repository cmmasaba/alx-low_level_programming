#ifndef _DOG_
#define _DOG_

/**
 * struct dog - structure that stores info about a dog
 * @name: is the dogs name
 * @age: is the dog's age
 * @owner: is the dog's owner name
 *
 * Description: the struct 'dog' stores the information about a dog
 * It stores the dog's name, the dog's age and the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
