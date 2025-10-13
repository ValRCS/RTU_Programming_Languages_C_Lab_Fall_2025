/*
 * week4_1_dynamic_array.c
 * Author: [Murad Hashimov]
 * Student ID: [241ADB148]
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Students should allocate memory for an integer array, fill it with data,
 *   compute something (e.g., average), and then free the memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int summ;
    int n;
    int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    // TODO: Allocate memory for n integers using malloc
    arr = malloc(n * sizeof(int));
    // Example: arr = malloc(n * sizeof(int));

    // TODO: Check allocation success
    if (arr == 0) {
        printf("\nMemory allocation is false!");
        return 1;
    }

    // TODO: Read n integers from user input and store in array
    printf("Put %d integers into array - \n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }
    // TODO: Compute sum and average
    for (int i = 0; i < n; i++) {
        summ = summ + arr[i];
    }
    float average = (float)summ / n;

    // TODO: Print the results
    printf("The sum of values - %d \n", summ);

    printf("The average of values - %f \n", average);

    // TODO: Free allocated memory
    free(arr);

    return 0;
}
