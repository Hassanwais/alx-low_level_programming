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
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1)) /* Skip '*'. */
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2)) /* Match '*' with characters. */
			return (1);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1)); /* Move to next characters. */

	return (0);
}
