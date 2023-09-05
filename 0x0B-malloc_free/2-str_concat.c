#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings and allocates memory for the result.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1 = 0, len2 = 0, total_len = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;

	result = malloc(total_len);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
