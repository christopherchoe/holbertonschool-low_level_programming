#ifndef DOG
#define DOG

/**
 * struct dog - dog structure
 * @name: the name of dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: a dog structure with information on the dog and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG */

