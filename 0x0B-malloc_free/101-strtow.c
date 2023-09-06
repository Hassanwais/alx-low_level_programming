#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
	int i, j, k, word_count = 0;
	int word_length;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	if (word_count == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		j = i;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		word_length = j - i;

		words[k] = (char *)malloc(sizeof(char) * (word_length + 1));
		if (words[k] == NULL)
		{
			for (k = 0; k < word_count; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		strncpy(words[k], str + i, word_length);
		words[k][word_length] = '\0';
		k++;
		i = j + 1;
	}
words[k] = NULL;
	return (words);
}
