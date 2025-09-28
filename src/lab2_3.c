#include <stdio.h>

int is_prime(int n) {
  if (n < 2) return 0;
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;
  for (int d = 3; d * d <= n; d += 2) {
    if (n % d == 0) return 0;
  }
  return 1;
}

int main(void) {
  int n;
  printf("Enter n: ");
  if (scanf("%d", &n) != 1) {
    printf("Input error.\n");
    return 1;
  }
  if (n < 2) {
    printf("Error: n must be >= 2\n");
    return 0;
  }
  printf("Primes up to %d:\n", n);
  for (int i = 2; i <= n; i++) {
    if (is_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
