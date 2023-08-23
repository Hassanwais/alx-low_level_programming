#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for (; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}

