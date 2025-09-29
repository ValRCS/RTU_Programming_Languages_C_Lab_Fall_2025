// Name : Murad Hashimov , id : 241ADB148

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
  int a = 1;
  int res = 1;

  while (a <= n) {
    res = res * a;
    a++;
  }
  return res;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error , cause it is negative");
  } else {
    int res = factorial(n);
    printf("Factorial of %d is %d", n, res);
  }

  // TODO: validate input, call function, print result

  return 0;
}
