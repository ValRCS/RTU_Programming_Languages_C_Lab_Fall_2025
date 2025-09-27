long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: n must be >= 0\n");
    } else {
        printf("%d! = %lld\n", n, factorial(n));
    }

    return 0;
}
