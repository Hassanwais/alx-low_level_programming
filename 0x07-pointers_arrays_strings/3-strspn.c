#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: String to search
 * @accept: Characters to compare against
 *
 * Return: Number of bytes in the initial segment of s that consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s)
    {
        found = 0;

        for (int i = 0; accept[i] != '\0'; i++)
        {
            if (*s == accept[i])
            {
                count++;
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            return count;
        }

        s++;
    }

    return count;
}
