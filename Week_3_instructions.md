# Lab 3 – Arrays, Pointers, and Strings

In this lab you will practice three core topics in C programming:
1. Array processing (min, max, sum, average)
2. Pointers as function parameters (swap, modify)
3. Manual string handling (strlen, strcpy)

You will work on **three separate C source files**:
- `lab3_task1.c`
- `lab3_task2.c`
- `lab3_task3.c`

Each file already contains:
- A comment header with your **Name** and **Student ID** to fill in
- Function prototypes
- A simple `main` with example tests
- Placeholders (`// TODO`) where you need to write code

---

## Task 1 – Array Algorithms (`lab3_task1.c`)

Implement the following functions for integer arrays:
- `int array_min(int arr[], int size)` – return the smallest element
- `int array_max(int arr[], int size)` – return the largest element
- `int array_sum(int arr[], int size)` – return the sum of elements
- `float array_avg(int arr[], int size)` – return the average as a float

**Rules:**
- Do not use external libraries besides `<stdio.h>`.
- Write separate functions for each operation.

**Example:**
```c
int arr[] = {10, 20, 5, 30, 15};
printf("Min: %d\n", array_min(arr, 5));  // 5
printf("Max: %d\n", array_max(arr, 5));  // 30
printf("Sum: %d\n", array_sum(arr, 5));  // 80
printf("Avg: %.2f\n", array_avg(arr, 5));// 16.00
```

## Task 2 – Pointers in Function Parameters (`lab3_task2.c`)

Practice using pointers to modify values inside functions.

### Implement
- `void swap(int *x, int *y)` – swap the values of two integers  
- `void modify_value(int *x)` – multiply the value by 2  

### Rules
- Functions must modify the caller’s variables via pointers.
- Test your functions in `main`.

### Example
```c
int a = 3, b = 7;
printf("Before swap: a=%d, b=%d\n", a, b);

swap(&a, &b);
printf("After swap: a=%d, b=%d\n", a, b);

modify_value(&a);
printf("After modify_value: a=%d\n", a);

## Task 3 – String Handling (`lab3_task3.c`)

Write your own versions of two basic string functions:

### Implement
- `int my_strlen(const char *str)` – return the number of characters (not counting `'\0'`)  
- `void my_strcpy(char *dest, const char *src)` – copy a string into `dest`  

### Rules
- Do **not** use `<string.h>` functions.
- Use loops or pointer arithmetic.
- Ensure `dest` has enough space to hold the copied string.

### Example
```c
char text[] = "hello";
int len = my_strlen(text);       // 5

char buffer[100];
my_strcpy(buffer, text);
printf("%s\n", buffer);          // hello

