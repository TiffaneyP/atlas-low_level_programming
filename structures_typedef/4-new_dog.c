#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - lengt of string
 * @s: pointer 
 * Return: returns an int 
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _strcpy - copy
 * @dest: destination
 * @src: source
 * Return: copy string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - diff dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name = 0, owner = 0;

	if (name != NULL && owner != NULL)
	{
		name = _strlen(name) + 1;
		owner = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * owner);

		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = _strcpy(max_dog->name, name);
		max_dog->owner = _strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}
	return (max_dog);
}
