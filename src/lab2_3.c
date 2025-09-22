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
    int ans=1;
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ans=0;
        }
    }
    printf("prime? %d",ans);
    return 0; // placeholder
}

int main(void) {
     // TODO: validate input and print all primes up to n
    int n;

    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);

    if (n<2){
        printf("ERROR: the number is too small");
    }else{
       for(int i=1; i<=n; i++){
         is_prime(n);
       }
    }

    return 0;
}
