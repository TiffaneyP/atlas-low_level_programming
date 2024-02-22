#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - attributes of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Description: dog attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
