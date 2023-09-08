#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_integer(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0; // Not a positive integer
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    if (!is_positive_integer(num1_str) || !is_positive_integer(num2_str)) {
        printf("Error\n");
        return 98;
    }

    // Convert input strings to integers
    unsigned long num1 = strtoul(num1_str, NULL, 10);
    unsigned long num2 = strtoul(num2_str, NULL, 10);

    // Perform the multiplication
    unsigned long result = num1 * num2;

    // Print the result
    printf("%lu\n", result);

    return 0;
}

