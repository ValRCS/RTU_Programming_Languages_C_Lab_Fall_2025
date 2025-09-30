/*
 * Lab 3, Task 1
 * Edasu Yadık, 231AEB028
 *
 * Implement array algorithms:
 *   - find minimum value
 *   - find maximum value
 *   - calculate sum
 *   - calculate average
 *
 * Rules:
 *   - Write separate functions for each operation.
 *   - Work with int arrays.
 *   - Average should return a float.
 *
 * Example:
 *   int arr[] = {1, 2, 3, 4, 5};
 *   min = array_min(arr, 5); // 1
 *   max = array_max(arr, 5); // 5
 *   sum = array_sum(arr, 5); // 15
 *   avg = array_avg(arr, 5); // 3.0
 */

#include <stdio.h>
#include <limits.h>

// Function prototypes
int array_min(int arr[], int size);
int array_max(int arr[], int size);
int array_sum(int arr[], int size);
float array_avg(int arr[], int size);

int main(void) {
    int arr[] = {10, 20, 5, 30, 15};
    int size = 5;

    printf("Min: %d\n", array_min(arr, size));
    printf("Max: %d\n", array_max(arr, size));
    printf("Sum: %d\n", array_sum(arr, size));
    printf("Avg: %.2f\n", array_avg(arr, size));

    return 0;
}

// Implement functions below
int array_min(int arr[], int size) {
    int my_min = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < my_min) {
            my_min = arr[i];
        }
    }
    return my_min;
}

int array_max(int arr[], int size) {
    int my_max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > my_max) {
            my_max = arr[i];
        }
    }
    return my_max;
}
int array_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float array_avg(int arr[], int size) {
    int sum = array_sum(arr, size);
    return (float) sum / size;
}
