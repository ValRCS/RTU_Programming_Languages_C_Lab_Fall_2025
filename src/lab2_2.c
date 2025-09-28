#include <stdio.h>

// Factorial function (iterative)
long long factorial(int n) {
  long long fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

int main(void) {
  int n;
  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error: n must be non-negative.\n");
    return 1;
  }

  long long result = factorial(n);
  printf("%d! = %lld\n", n, result);
  return 0;
}
