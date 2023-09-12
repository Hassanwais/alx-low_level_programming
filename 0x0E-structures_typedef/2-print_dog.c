#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to a struct dog to be printed.
 *
 * Description: This function prints the contents of
 * a struct dog, including
 * its name, age, and owner. If any of these elements are NULL,
 * it prints "(nil)"
 * instead of the NULL value. If the provided struct pointer
 * d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	printf("\n");
}
