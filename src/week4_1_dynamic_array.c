/*
 * week4_1_dynamic_array.c
 * Author: Mehmet Taha Ünal
 * Student ID: 231AMB077
 * Description:
 * Demonstrates creation and usage of a dynamic array using malloc.
 * Students allocate memory for integers, fill it with user input,
 * compute the sum and average, and then free the memory properly.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, *arr, sum = 0;
    double avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (double)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(arr);
    return 0;
}
