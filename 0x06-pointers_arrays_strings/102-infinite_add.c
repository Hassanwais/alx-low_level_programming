#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * infinite_add - Adds two numbers.
 * @n1: Pointer to the first number string.
 * @n2: Pointer to the second number string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer r.
 * Return: Pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum;
	int i, j, k;

	for (i = 0; n1[i] != '\0' || n2[i] != '\0'; i++)
	{
		sum = carry;

		if (n1[i])
			sum += n1[i] - '0';
		if (n2[i])
			sum += n2[i] - '0';

		carry = sum / 10;
		r[i] = (sum % 10) + '0';
	}
	if (carry)
	{
		r[i] = carry + '0';
		i++;
	}

	if (i >= size_r)
		return (0);

	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		char temp = r[j];
		
		r[j] = r[k];
		r[k] = temp;

	}

	r[i] = '\0';

	return (r);
}
int main(void)
{

	char n1[] = "123456789";
	char n2[] = "987654321";
	char r[20];

	char *result = infinite_add(n1, n2, r, sizeof(r));

	if (result)
		printf("Sum: %s\n", result);
	else
		printf("Result cannot be stored in buffer\n");
	return (0);
}
