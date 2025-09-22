#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
  if (n < 2) return 0;
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Error: n must be >= 2.\n");
    return 1;
  }

  printf("Prime numbers up to %d:\n", n);
  for (int i = 2; i <= n; ++i) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}