#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents information about a dog
 * @name: Pointer to a string containing the dog's name
 * @age: Age of the dog as a floating-point number
 * @owner: Pointer to a string containing the dog's owner's name
 *
 * Description: This struct defines a data structure to store information
 * about a dog, including its name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
