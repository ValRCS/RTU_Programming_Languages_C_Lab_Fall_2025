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
    if (n<2) return 0;
    for (int i=2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; // placeholder
}

int main(void) {
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    if (n<=2) {
        printf("Error\n");
    } else {
        printf("Prime numbers up to %d:\n", n);
        for (int i=2; i<=n; i++) {
            if (is_prime(i)) {
                printf("%d ", i);
            }
        }
    }
    printf("\n");

    return 0;
}
