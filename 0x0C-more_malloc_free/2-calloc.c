#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return (NULL);

    // Initialize the allocated memory to zero
    unsigned int total_size = nmemb * size;
    unsigned char *byte_ptr = (unsigned char *)ptr;

    for (unsigned int i = 0; i < total_size; i++)
    {
        byte_ptr[i] = 0;
    }

    return (ptr);
}

int main(void)
{
    unsigned int nmemb = 5;
    unsigned int size = sizeof(int);

    int *arr = (int *)_calloc(nmemb, size);

    if (arr != NULL)
    {
        // Print the initialized elements of the array
        for (unsigned int i = 0; i < nmemb; i++)
        {
            printf("%d ", arr[i]);
        }

        free(arr); // Free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return (0);
}

