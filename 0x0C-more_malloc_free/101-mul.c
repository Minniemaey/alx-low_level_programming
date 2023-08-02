#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        // Incorrect number of arguments
        exit(98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    // Check if num1 and num2 only contain digits
    for (int i = 0; num1[i] != '\0'; i++) {
        if (num1[i] < '0' || num1[i] > '9') {
            // num1 contains non-digit characters
            exit(98);
        }
    }
    for (int i = 0; num2[i] != '\0'; i++) {
        if (num2[i] < '0' || num2[i] > '9') {
            // num2 contains non-digit characters
            exit(98);
        }
    }

    // Calculate the length of the result
    int len1 = 0, len2 = 0;
    while (num1[len1] != '\0') {
        len1++;
    }
    while (num2[len2] != '\0') {
        len2++;
    }
    int resultLen = len1 + len2;

    // Allocate memory for the result
    char *result = malloc((resultLen + 1) * sizeof(char));
    if (result == NULL) {
        // Memory allocation failed
        exit(98);
    }

    // Initialize the result with '0's
    for (int i = 0; i < resultLen; i++) {
        result[i] = '0';
    }
    result[resultLen] = '\0';

    // Perform multiplication
    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = (result[i + j + 1] - '0') + (digit1 * digit2) + carry;
            result[i + j + 1] = (product % 10) + '0';
            carry = product / 10;
        }
        result[i] += carry;
    }

    // Print the result
    char *ptr = result;
    while (*ptr == '0') {
        ptr++;
    }
    if (*ptr == '\0') {
        // The result is zero
        ptr--;
    }
    while (*ptr != '\0') {
        putchar(*ptr);
        ptr++;
    }
    putchar('\n');

    // Free allocated memory
    free(result);

    return 0;
}

