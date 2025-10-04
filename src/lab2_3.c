
#include <math.h>  // for sqrt function
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
  // TODO: check if n is prime using loop up to sqrt(n)
  if (n < 2) return 0;  // numbers less than 2 are not prime
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return 0;  // found a divisor → not prime
    }
  }
  return 1;  // no divisors found → prime
}

int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);

  // TODO: validate input and print all primes up to n
  if (n < 2) {
    printf("Error: n must be >= 2\n");
    return 1;
  }

  printf("Prime numbers up to %d:\n", n);
  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
  // TODO: check if n is prime using loop up to sqrt(n)
  return 0;  // placeholder
}

int main(void) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);

  // TODO: validate input and print all primes up to n.

  return 0;
}
