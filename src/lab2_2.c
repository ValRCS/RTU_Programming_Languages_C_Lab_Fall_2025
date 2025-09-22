#include <stdio.h>

long long factorial(int n){
    long long r = 1;
    for(int i = 1; i <= n; i++){
        r *= i;
    }
    return r;
}

int main(void){
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;

    if(n < 0){
        printf("Error: n must be >= 0\n");
    } else {
        printf("%d! = %lld\n", n, factorial(n));
    }
    return 0;
}
