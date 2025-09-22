#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    long long res = 1;
    for (int i=1; i<=n; i++) {
        res *= i;
    }
    return res; // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n<0) {
        printf("Error\n");
    } else {
        printf("The result is: %d\n", factorial(n));
    }

    return 0;
}
