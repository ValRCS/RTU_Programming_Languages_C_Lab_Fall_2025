# 🧠 Week 5 – Files & Modular Programming

This week we explore **file input/output (I/O)** and **modular program design** in C.  
You will learn to read and write files, store structured data, and create a simple management system that persists between runs.

---

## 🧾 Task 1: Read and Write Data from Files

### Implement
Create a C program `week5_task1_file_io.c` that:
1. Opens a text file for writing (e.g., `"data.txt"`).
2. Writes a few lines of text into it using `fprintf()`.
3. Closes the file properly.
4. Opens the same file again for reading.
5. Reads its contents line by line using `fgets()` and prints them to the console.

Use the provided stub file:
```bash
week5_task1_file_io.c
```

### Rules
- Always check that the file pointer returned by `fopen()` is **not `NULL`**.
- Use clear messages to indicate whether you are writing or reading.
- Close every opened file using `fclose()`.
- Avoid hardcoding long text — optionally read input from the user.
- Ensure your program compiles without warnings using `-Wall`.

### Example
```bash
$ ./week5_task1_file_io
Writing lines to data.txt...
Reading contents:
Hello, file I/O in C!
This is another line.
```

---

## 🧾 Task 2: Save and Load Structured Records

### Implement
Create a C program `week5_task2_struct_save_load.c` that:
1. Defines a `struct Student` containing a name, age, and GPA.
2. Saves one student record to a text file using a helper function `save_student()`.
3. Loads that record from the file using another function `load_student()`.
4. Prints the loaded record to confirm that it matches the original.

Use the provided stub file:
```bash
week5_task2_struct_save_load.c
```

### Rules
- Implement both `save_student()` and `load_student()` with proper file checking.
- Save the data in a simple text format: `name age gpa`.
- Use `fprintf()` and `fscanf()` for writing and reading.
- Avoid using global variables.
- Handle cases when the file cannot be opened.

### Example
```bash
$ ./week5_task2_struct_save_load
Saving student to file...
Loading student from file...
Loaded student: Alice, 21, GPA 3.75
```

---

## 🧾 Task 3: Mini-Project – Student Management System with File Persistence

### Implement
Create a C program `week5_task3_student_management_system.c` that:
1. Allows listing, adding, and saving students.
2. Uses an array of `struct Student` to store data in memory.
3. Loads existing data from a file at startup.
4. Saves all students back to the file before exiting.
5. Displays a simple text-based menu with options (list/add/save-exit).

Use the provided stub file:
```bash
week5_task3_student_management_system.c
```

### Rules
- Implement all functions marked `TODO` in the stub:
  - `load_students()`
  - `save_students()`
  - `add_student()`
  - `list_students()`
- Use text file storage (`students.txt`) and one line per record.
- Ensure program handles empty files gracefully.
- Maintain clean and readable code with comments.
- Compile without warnings using the provided Makefile.

### Example
```bash
=== Student Management System ===
1. List students
2. Add student
3. Save and Exit
Select an option: 2
Enter name: Alice
Enter ID: 101
Enter GPA: 3.8
Student added successfully!

=== Student Management System ===
1. List students
2. Add student
3. Save and Exit
Select an option: 3
Data saved. Goodbye!
```

---

## 💾 Bonus Task 4: Binary File Version (Advanced)

### Implement
Extend **Task 2** to save and load `struct Student` records in **binary format** using `fwrite()` and `fread()`.

Create a new file:
```bash
week5_task4_struct_binary_io.c
```

Your program should:
1. Define the same `struct Student` as in Task 2.
2. Save the struct directly in binary format.
3. Load the struct back and print its contents.
4. Compare file sizes between text and binary versions.

### Rules
- Use modes `"wb"` (write binary) and `"rb"` (read binary).
- Use `fwrite(&student, sizeof(Student), 1, fp);`
- Use `fread(&student, sizeof(Student), 1, fp);`
- Print confirmation messages during save and load.
- Check file pointer validity before any file operations.

### Example
```bash
$ ./week5_task4_struct_binary_io
Saving student in binary format...
Loading student from binary file...
Loaded student: Alice, 21, GPA 3.75
Binary file size: 60 bytes
```

---

## 🛠️ Makefile

You can compile all tasks with:
```bash
make
```

Run individual programs with:
```bash
make run1
make run2
make run3
```

Clean all executables:
```bash
make clean
```

---

## 📚 Authoritative Resources

### File I/O in C
- **GNU C Library – File Streams**  
  https://www.gnu.org/software/libc/manual/html_node/Streams.html
- **ISO C `stdio.h` Reference (cppreference)**  
  https://en.cppreference.com/w/c/io

### Structs and Modular Programming
- **Learn C – Structs and File Handling** (Programiz)  
  https://www.programiz.com/c-programming/c-structures
- **Separate Compilation and Headers** (GeeksforGeeks)  
  [https://www.geeksforgeeks.org/separate-compilation-and-header-files-in-c/](https://www.geeksforgeeks.org/c/header-files-in-c-cpp-and-its-uses/)

### Binary Files
- **C Binary File I/O** (TutorialsPoint)  
  https://www.tutorialspoint.com/cprogramming/c_file_io.htm
- **Binary I/O Examples (cplusplus.com)**  
  https://cplusplus.com/reference/cstdio/fwrite/

---

## ✅ Learning Outcomes

After completing Week 5, you will be able to:
- Read and write data to text and binary files in C.
- Persist and reload structured records using `struct`.
- Implement a small modular project with file persistence.
- Understand how to separate code into multiple functions and files.
- Compare text and binary file storage formats.

## 🧩 Submission Instructions

Students can submit their completed Week 5 work in one or BOTH of the following ways:

### Option A – Submit GitHub Repository URL
If you have been working in GitHub Codespaces or using your forked course repository:
1. Ensure all your Week 5 source files are committed and pushed to your repository.
2. Include the following files in your repository under the `src/` folder (or equivalent):
   - `week5_task1_file_io.c`
   - `week5_task2_struct_save_load.c`
   - `week5_task3_student_management_system.c`
   - *(optional)* `week5_task4_struct_binary_io.c`
3. Provide a **URL link to your GitHub repository** in the Moodle submission field.
4. Make sure your repository is public or accessible to the instructor.

### Option B – Upload Source Files Directly to Moodle
If you prefer, you may submit the actual source code files directly:
1. Upload your `.c` files for all tasks as separate attachments.
2. Each file must include:
   - A comment at the top with your **Name**, **Surname**, and **Student ID**.
   - Optional: a link to your GitHub repository.
   - Compilation instructions if special flags are required.
3. Check that each program compiles without errors or warnings using:
   ```bash
   make lab5

