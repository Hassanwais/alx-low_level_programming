#include "main.h"
/**
 * strcat - function that concatenates two functions.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int len_of_str, y;
	len_of_str = 0;
	while (dest[len_of_str] != '\0')
	{
		len_of_str++;
	}
	for (y = 0; src[y] != '\0'; y++, len_of_str++)
	{
		dest[len_of_str] = src[y];
	}
	dest[len_of_str] = '\0';
	return (dest);
}
