#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size (in bytes) of the previously allocated memory block.
 * @new_size: The new size (in bytes) for the reallocated memory block.
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return (NULL);
        return (new_ptr);
    }

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return (NULL);

    if (new_size < old_size)
        old_size = new_size;

    memcpy(new_ptr, ptr, old_size);
    free(ptr);

    return (new_ptr);
}

int main(void)
{
    unsigned int old_size = 5;
    unsigned int new_size = 10;

    int *ptr = (int *)malloc(old_size * sizeof(int));

    if (ptr != NULL)
    {
        for (unsigned int i = 0; i < old_size; i++)
        {
            ptr[i] = i;
        }

        int *new_ptr = (int *)_realloc(ptr, old_size * sizeof(int), new_size * sizeof(int));

        if (new_ptr != NULL)
        {
            printf("Original Array:\n");
            for (unsigned int i = 0; i < old_size; i++)
            {
                printf("%d ", ptr[i]);
            }

            printf("\nNew Array:\n");
            for (unsigned int i = 0; i < new_size; i++)
            {
                printf("%d ", new_ptr[i]);
            }

            free(new_ptr);
        }
        else
        {
            printf("Memory reallocation failed.\n");
            free(ptr);
        }
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return (0);
}

