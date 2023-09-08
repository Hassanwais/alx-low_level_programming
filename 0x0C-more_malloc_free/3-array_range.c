#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
    if (min > max)
        return (NULL);

    int *arr = (int *)malloc(sizeof(int) * (max - min + 1));

    if (arr == NULL)
        return (NULL);

    for (int i = 0; i <= max - min; i++)
    {
        arr[i] = min + i;
    }

    return (arr);
}

int main(void)
{
    int min = 1;
    int max = 5;

    int *result = array_range(min, max);

    if (result != NULL)
    {
        for (int i = 0; i <= max - min; i++)
        {
            printf("%d ", result[i]);
        }
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return (0);
}

