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
## Acquiring Lab 3 Files in Codespaces

There are two ways to get the new Lab 3 files into your Codespaces.  
Choose the method that fits your situation.

---

### Option A – Update Your Existing Codespace (Recommended)

If you already forked the course repository in Week 1 and created a Codespace, you can simply **pull the new files**.

1. Open your existing Codespace.
2. Make sure you are on the `main` branch from terminal:
   ```bash
   git checkout main
   ```
3. Check that you have the teacher’s repository set as upstream:
```git remote -v```
You should see something like this in the output:
```
origin    https://github.com/student123/RTU_Programming_Languages_C_Lab_Fall_2025.git (fetch)
upstream  https://github.com/ValRCS/RTU_Programming_Languages_C_Lab_Fall_2025.git (fetch)
```
If you do not see upstream, add it manually:
```git remote add upstream https://github.com/ValRCS/RTU_Programming_Languages_C_Lab_Fall_2025.git```
4. Pull the new files from the teacher repository:
```git pull upstream main```
5. After this, you should see the new files:
```
src/lab3_task1.c
src/lab3_task2.c
src/lab3_task3.c
week3_instructions.md
```

### Option A2 – Update Your Fork Using GitHub "Sync Fork" Button

If you don’t want to use terminal commands in Codespaces, you can update your fork directly on the GitHub website.

#### Steps

1. Open your fork of the course repository on GitHub (e.g. `https://github.com/student123/RTU_Programming_Languages_C_Lab_Fall_2025`).
2. On the repository page, you should see a **“Sync fork”** button near the top of the page.  
   - If your fork is behind the teacher’s repository, GitHub will show something like:  
     *“This branch is 3 commits behind ValRCS:main”*.
3. Click the **“Sync fork”** button, then click **“Update branch”** to bring your fork up to date.
4. After that, go back to your Codespace and run:
```bash
   git pull origin main
```
This will download the updated files from your fork into your Codespace.
⚠️ Note: The “Sync fork” method updates your fork on GitHub, but you still need to run
git pull origin main inside your Codespace to get the new files locall

### Option B – Create a New Fork and Codespace (Only if Needed)

Use this option **only if**:
- You accidentally deleted your Codespace, **or**
- Your fork is broken and cannot be updated.

Steps:

1. Go to the [teacher repository](https://github.com/ValRCS/RTU_Programming_Languages_C_Lab_Fall_2025).
2. Click **Fork** to create your own copy under your GitHub account.
3. When forking, GitHub may ask for a repository name.  
   - Example: if your GitHub username is `student123`, the default fork name will be  
     `student123/RTU_Programming_Languages_C_Lab_Fall_2025`.  
   - If you already created a fork in Week 1 or Week 2, you will need to **rename this new fork** (e.g. `RTU_Programming_Languages_C_Lab_Fall_2025_v2`) to avoid conflicts.
4. Open the newly forked repository in GitHub and click:  
**Code → Codespaces → Create Codespace on main**
5. You will now have a fresh Codespace with all files, including Lab 3.
   **NOTE**: Option A is much preferred. At some point in your future jobs you will not be allowed to just fork anytime you need a fresh copy - that is highly unprofessional.


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
```

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
```

## Submit

* As usual, for each assignment submit the source code file for the assignment `lab3_task1.c` for first and so on.
* Alternatively, you can also submit the link to your repository which has this MODIFIED BY YOU file. Not just my original stub..



