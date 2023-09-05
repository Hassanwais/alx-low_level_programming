#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k = 0;                              char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
	}

	total_length += ac - 1;
	total_length++;

	result = malloc(sizeof(char) * total_length);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k++] = av[i][j];
		}
		if (i < ac - 1)
			result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
