#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the start of the matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
    int sum_diag1 = 0, sum_diag2 = 0;

    for (int i = 0; i < size; i++)
    {
        sum_diag1 += a[i * size + i]; // Elements on the main diagonal
        sum_diag2 += a[i * size + (size - 1 - i)]; // Elements on the opposite diagonal
    }

    printf("Sum of diagonal 1: %d\n", sum_diag1);
    printf("Sum of diagonal 2: %d\n", sum_diag2);
}