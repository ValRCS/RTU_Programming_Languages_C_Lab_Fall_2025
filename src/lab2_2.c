#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result.
*/

long long factorial(int n) {
  long long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;  // faktorial: n * (n-1) * ... * 1
  }
  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error: n must be >= 0\n");
  } else {
    long long fact = factorial(n);
    printf("%d! = %lld\n", n, fact);
  }

  return 0;

  // TODO: compute factorial iteratively
  return 1;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  // TODO: validate input, call function, print result

  return 0;
}
