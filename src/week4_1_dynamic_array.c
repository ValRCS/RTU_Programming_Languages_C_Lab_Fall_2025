/*
 * week4_1_dynamic_array.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Program asks the user for number of elements, allocates memory dynamically,
 *   reads integers, computes their sum and average, and frees memory before
 * exit.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  int *arr = NULL;
  int sum = 0;
  double average = 0.0;

  printf("Enter number of elements: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid size.\n");
    return 1;
  }

  // Allocate memory for n integers using malloc
  arr = malloc(n * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Enter %d integers: ", n);
  for (int i = 0; i < n; i++) {
    if (scanf("%d", &arr[i]) != 1) {
      printf("Invalid input detected. Exiting.\n");
      free(arr);
      return 1;
    }
    sum += arr[i];
  }

  average = (double)sum / n;

  printf("Sum = %d\n", sum);
  printf("Average = %.2f\n", average);

  // Free allocated memory
  free(arr);

  return 0;
}
