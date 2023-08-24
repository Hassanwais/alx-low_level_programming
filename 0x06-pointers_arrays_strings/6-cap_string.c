#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Pointer to the input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	bool new_word = true;

	while (str[i] != '\0')
	{
		if (isalpha(str[i]))
		{
			if (new_word)
			{
				str[i] = toupper(str[i]);
				new_word = false;
			}
		}
		else
		{
			new_word = true;
		}

		i++;
	}

	return (str);
}
