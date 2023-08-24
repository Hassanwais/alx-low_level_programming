#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - a function that Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Negative value if s1 is less than s2,
 * positive if s1 is greater than s2, 0 if they are equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (-(*s2));
	}
	else
	{
		return (*s1);
	}
}
