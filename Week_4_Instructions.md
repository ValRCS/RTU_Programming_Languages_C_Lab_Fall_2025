# 🧩 Week 4 – Dynamic Memory & Structures

This week focuses on using pointers for **dynamic memory allocation**, creating and using **structures**, and combining both ideas to build a small **in-memory database**.  
All programs should compile cleanly without warnings using the provided Makefile.

---

## 🧠 Task 1 – Create Dynamic Arrays with `malloc`

### Implement
Write a C program that:
- Asks the user for the number of elements.
- Dynamically allocates memory for an integer array using `malloc`.
- Reads integers from user input and stores them in the array.
- Calculates and prints the sum and average of the entered numbers.
- Frees all allocated memory before the program exits.

The file should be named:  
`src/week4_1_dynamic_array.c`

### Rules
- Always **check** if `malloc` returned a valid pointer.
- Use `sizeof(int)` when allocating memory.
- Avoid memory leaks: every successful `malloc` should have a corresponding `free`.
- Use clear, formatted output with `printf`.

### Example
```
Enter number of elements: 5
Enter 5 integers: 10 20 30 40 50
Sum = 150
Average = 30.00
```

---

## 🎓 Task 2 – Define and Use a `struct` (Student Record)

### Implement
Write a C program that defines and uses a structure called `Student`.  
Each student has:
- `char name[50]`
- `int id`
- `float grade`

The program should:
- Declare at least **two** `Student` variables.
- Assign values to their fields (either manually or through user input).
- Print the information of each student in a formatted way.

The file should be named:  
`src/week4_2_struct_student.c`

### Rules
- Use `struct` keyword for the definition.
- Access fields using the dot (`.`) operator.
- You may use `strcpy()` to assign a string to the `name` field.
- Keep output readable and labeled.

### Example
```
Student 1: Alice Johnson, ID: 1001, Grade: 9.1
Student 2: Bob Smith, ID: 1002, Grade: 8.7
```

---

## 🗂️ Task 3 – Build an In-Memory Database (Array of Structs)

### Implement
Create a C program that:
- Defines a `struct Student` (same as in Task 2).
- Dynamically allocates memory for an **array of Student records** using `malloc`.
- Prompts the user for the number of students.
- Reads each student’s name, ID, and grade from the user.
- Prints all student records in a formatted table.
- Frees all allocated memory before exit.

The file should be named:  
`src/week4_3_struct_database.c`

### Rules
- Reuse your `struct Student` definition from Task 2.
- Use `malloc(n * sizeof(struct Student))` for allocation.
- Remember to use `scanf("%s", student[i].name)` for names (no spaces) or `fgets()` for full names.
- Free the allocated memory before program termination.
- Consider sorting or computing averages as optional bonus.

### Example
```
Enter number of students: 3
Enter data for student 1: Alice 1001 9.1
Enter data for student 2: Bob 1002 8.7
Enter data for student 3: Carol 1003 9.5

ID     Name        Grade
1001   Alice       9.1
1002   Bob         8.7
1003   Carol       9.5
```

---

## 💾 Submission Instructions

Students can submit their work in **either of two ways or BOTH**:

### **Option A – Submit Repository URL**
1. Ensure your GitHub repository is up to date:
   ```bash
   git add .
   git commit -m "Week 4 completed"
   git push
   ```
2. Submit the **URL to your GitHub repository** in Moodle.  
   Example:  
   ```
   https://github.com/yourusername/RTU_Programming_Languages_C_Lab_Fall_2025
   ```

### **Option B – Submit Source Files**
1. Download your source files from the Codespaces `src/` folder:
   - `week4_1_dynamic_array.c`
   - `week4_2_struct_student.c`
   - `week4_3_struct_database.c`
2. Upload these `.c` files directly to Moodle.

Again, I prefer option A, but you can do option B if you are having trouble with your git repository.

---

## 📚 Web Resources on Dynamic Memory & Structs in C

Note: Some of these are not formal, but should provide a reasonable overview.

### Dynamic Memory Allocation
- [GeeksforGeeks — Dynamic Memory Allocation in C (malloc, calloc, realloc, free)](https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)  
- [Programiz — C Dynamic Memory Allocation](https://www.programiz.com/c-programming/c-dynamic-memory-allocation)  
- [Learn-C.org — Dynamic Allocation (interactive)](https://www.learn-c.org/en/Dynamic_allocation)  
- [cppreference — `malloc` (C)](https://en.cppreference.com/w/c/memory/malloc)  *(see also `free` and `realloc` linked on that page)*

### Structures (`struct`)
- [Microsoft Learn — Structure Declarations (C)](https://learn.microsoft.com/en-us/cpp/c-language/structure-declarations?view=msvc-170)  
- [GeeksforGeeks — Structures in C](https://www.geeksforgeeks.org/c/structures-c/)  
- [Programiz — C struct](https://www.programiz.com/c-programming/c-structures)


---

✅ **Reminder:**  
- Your code must compile without warnings using the provided Makefile.  
- Comment your code clearly — explain *why* each important step is done.  
- Always free dynamically allocated memory.  
- Programs that crash or leak memory will lose points.
