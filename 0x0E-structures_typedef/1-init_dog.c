#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to a struct dog to be initialized.
 * @name: Pointer to a string containing the dog's name.
 * @age: Age of the dog as a floating-point number.
 * @owner: Pointer to a string containing the dog's owner's name.
 *
 * Description: This function initializes a struct dog variable with the
 * provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
