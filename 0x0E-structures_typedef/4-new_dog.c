#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: A pointer to the newly created dog_t structure, or NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;

    /* Allocate memory for new dog_t structure */
    new_dog = (dog_t *) malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Copy name */
    name_copy = strdup(name);
    if (name_copy == NULL) {
        free(new_dog);
        return (NULL);
    }

    /* Copy owner */
    owner_copy = strdup(owner);
    if (owner_copy == NULL) {
        free(new_dog);
        free(name_copy);
        return (NULL);
    }

    /* Set values in the new dog_t structure */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}

