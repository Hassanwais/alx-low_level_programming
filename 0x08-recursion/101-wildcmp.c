#include "main.h"

/**
 * wildcmp - Compares two strings, allowing '*' as a wildcard.
 * @s1: The first string to compare.
 * @s2: The second string to compare with wildcard '*'.
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0, asterisk = -1, match;

	while (s1[i] != '\0')
	{
		if (s2[j] == '*')
		{
			asterisk = j;
			match = i;
			j++;
		}
		else if (s1[i] != s2[j])
		{
			if (asterisk != -1)
			{
				j = asterisk + 1;
				i = match + 1;
				match++;
			}
			else
				return (0);
		}
		else
		{
			i++;
			j++;
		}
	}

	while (s2[j] == '*')
		j++;

	return (s2[j] == '\0');
}
