#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of the integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m  = *a;
	*a = *b;
	*b = m;
}
