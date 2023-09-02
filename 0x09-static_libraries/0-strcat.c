#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two functions.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int len_of_dest, y;

	len_of_dest = 0;
	while (dest[len_of_dest] != '\0')
	{
		len_of_dest++;
	}
	for (y = 0; src[y] != '\0'; y++, len_of_dest++)
	{
		dest[len_of_dest] = src[y];
	}
	dest[len_of_dest] = '\0';
	return (dest);
}
