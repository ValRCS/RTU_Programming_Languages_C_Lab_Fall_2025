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
  int inp = n;
  for (int i = 1; i <= n; i++) {
    if (inp % i == 0 && i != inp) {
      return false;
    } else {
      return true;
    }
  }
  return true;  // placeholder
}

int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);

  // TODO: validate input and print all primes up to n

  return 0;
}
