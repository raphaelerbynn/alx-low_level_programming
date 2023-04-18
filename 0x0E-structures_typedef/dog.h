#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with name, age, and owner information
 * @name: Pointer to a string representing the name of the dog
 * @age: Floating point value representing the age of the dog
 * @owner: Pointer to a string representing the owner of the dog
 *
 * Description: This structure represents a dog with three members:
 *              name (char *), age (float), and owner (char *).
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif /* DOG_H */

