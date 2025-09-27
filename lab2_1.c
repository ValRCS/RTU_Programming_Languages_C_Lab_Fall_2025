int sum_to_n(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int n;
  printf(" n: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Error: n must be >= 1\n");
  } else {
    printf("Sum 1..%d = %d\n", n, sum_to_n(n));
  }

  return 0;
}
