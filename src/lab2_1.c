// Name : Murad Hashimov , id : 241ADB148
#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
  int inp = 0;
  for (int i = 1; i <= n; i++) {
    inp = inp + i;
  }
  return inp;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);
  if (n < 1) {
    printf("Error");
  } else {
    int result = sum_to_n(n);
    printf("Result %d\n", result);
  }

  // TODO: validate input, call function, and print result

  return 0;
}
