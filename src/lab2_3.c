#include <stdio.h>

// Return 1 if prime, 0 otherwise
int is_prime(int n) {
  if (n < 2) return 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main(void) {
  int n;
  printf("Enter a number (>=2): ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Error: n must be at least 2.\n");
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
}
