#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog structure
 * @name: pointer to a string containing the name of the dog
 * @age: the age of the dog
 * @owner: pointer to a string containing the name of the dog's owner
 *
 * Return: pointer to the new dog struct, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = 0;
	while (name[name_len] != '\0')
		name_len++;
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];

	owner_len = 0;
	while (owner[owner_len] != '\0')
		owner_len++;
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
