#include "main.h"
#include <stdio.h>
/**
 * strlen - a function that returns the length of a string
 * @s: string
 * Return: longi
 */
int _strlen(char *s)
{
	int longi  = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
