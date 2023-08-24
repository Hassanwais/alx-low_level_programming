#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (capitalize_next)
		{
			str[i] = str[i] - ('a' - 'A');
			capitalize_next = 0;
		}
	}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize_next = 1;
		}
		i++;
	}

	return (str);
}
