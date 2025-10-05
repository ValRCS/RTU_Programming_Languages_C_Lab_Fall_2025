
# 📘 C Programming – 5-Week Course Syllabus

This 5-week course introduces core concepts of the C programming language.  
It is designed for **second-year Computer Science students** who already know Java and/or C++ and will continue with Python afterward.  
Each week consists of one **lecture** (2×45 min) and one **lab** (2×45 min).

---

## 📅 Weekly Overview

| **Week** | **Topic** | **Focus Keywords** |
|-----------|------------|--------------------|
| **1** | Introduction & C Basics | setup, syntax, compilation, printf/scanf |
| **2** | Control Flow & Functions | branching, loops, functions |
| **3** | Arrays, Strings & Pointers | arrays, strings, pointers |
| **4** | Dynamic Memory & Structures | malloc, struct, typedef, union |
| **5** | Files & Modular Programming | file I/O, preprocessor, headers, modularity |

---

## Week 1 – Introduction & C Basics
**Lecture**
- History and role of C (systems, embedded, portability)
- Program structure (`#include`, `main`, standard library)
- Compilation process (source → preprocessor → compiler → linker → executable)
- Data types (`int`, `char`, `float`, `double`), variables, and constants
- Input/output using `printf` and `scanf`

**Lab**
- Set up environment (GitHub Codespaces / VS Code + GCC)
- Write, compile, and run “Hello, World”
- Simple arithmetic calculator
- Explore `printf` / `scanf` format specifiers

---

## Week 2 – Control Flow & Functions
**Lecture**
- Operators and precedence
- Conditional statements (`if`, `else`, `switch`)
- Loops (`for`, `while`, `do…while`)
- Functions: prototypes, parameters, return types, scope (`auto`, `static`)
- Comparing Java methods vs C functions

**Lab**
- Write branching and looping programs
- Create functions (factorial, prime test, calculator)
- Trace program flow and debug using print statements

---

## Week 3 – Arrays, Strings & Pointers (Introduction)
**Lecture**
- One-dimensional and multidimensional arrays
- Strings as character arrays and null termination
- Introduction to pointers: addresses, dereferencing, pointer–array relationship
- Function arguments by value vs by pointer

**Lab**
- Implement manual string functions (`strlen`, `strcpy`)
- Work with numeric arrays (min, max, average)
- Pass pointers to functions (swap two values)

---

## Week 4 – Advanced Pointers, Dynamic Memory & Structures
**Lecture**
- Pointer arithmetic and pointer to pointer
- Dynamic memory allocation (`malloc`, `calloc`, `realloc`, `free`)
- `struct` definitions and field access
- `typedef`, `union`, and `enum`

**Lab**
- Create dynamic arrays with `malloc`
- Define and use a `struct` (e.g., Student record)
- Build a small in-memory database (array of structs)

---

## Week 5 – Files, Preprocessor & Modular Programming
**Lecture**
- File I/O (`fopen`, `fprintf`, `fscanf`, `fread`, `fwrite`)
- Preprocessor directives (`#include`, `#define`, conditional compilation)
- Separate compilation and header files
- Debugging and best practices

**Lab**
- Read/write data from files
- Save and load structured records
- Split program into multiple source and header files
- Mini-project: Student management system with file persistence

---

## Course Outcomes
By the end of the course, students will be able to:

- Write, compile, and debug C programs in a Linux/GCC environment  
- Apply control flow, functions, arrays, strings, and pointers effectively  
- Manage dynamic memory and create composite data types using `struct`  
- Work with text and binary files  
- Organize programs into multiple source files with headers  
- Understand how C differs from Java and how it connects to Python  
- Demonstrate foundational skills for later systems and software courses



## Lab 1 — C Basics (Week 1)

**Goals**
- Set up a working C toolchain (GitHub Codespaces *or* local Linux with GCC + VS Code).
- Write, compile, and run simple C programs.
- Practice `printf` / `scanf` format specifiers.

## Repository Layout
```
Lab01_C_Basics/
├─ src/
│  ├─ hello.c
│  ├─ calculator.c
│  └─ format_specifiers.c
├─ include/
├─ bin/                # compiled binaries land here
├─ .vscode/            # VS Code tasks & debug config
├─ .devcontainer/      # one-click Codespaces
├─ Makefile
├─ .gitignore
├─ LICENSE (MIT)
└─ README.md
```

---

## Option A — Run in **GitHub Codespaces** (recommended)

1. Push this repo to GitHub and click **Code → Codespaces → Create codespace on main**.
2. The provided **devcontainer** will provision a C/C++ environment (GCC, GDB, Make).
3. Open the **Terminal** in VS Code (inside Codespaces) and run:

```bash
make            # builds all targets
./bin/hello
./bin/calculator
./bin/formats
```

Or use the pre-configured **VS Code Tasks**:
- **Build All (Make)** — builds all targets
- **Run: Hello** — builds and runs `hello`
- **Run: Calculator** — builds and runs `calculator`
- **Run: Formats** — builds and runs `formats`

Debugging:
- Put a breakpoint in `src/hello.c`
- Run **Start Debugging (Hello)** from the Run/Debug panel

---

## Option B — Run locally on Linux (or WSL)

1. Install build tools:
   ```bash
   sudo apt update && sudo apt install -y build-essential gdb
   ```
2. Build with `make`:
   ```bash
   make
   ./bin/hello
   ./bin/calculator
   ./bin/formats
   ```

---

## Targets (via `make`)
- `make` or `make all` — build all programs
- `make hello` — build Hello, World
- `make calculator` — build calculator
- `make formats` — build format specifier demo
- `make clean` — remove build artifacts

---

## Programs

### 1) `hello.c`
- Prints a greeting and shows command-line arguments (if any).

### 2) `calculator.c`
- Simple arithmetic calculator (sum, difference, product, quotient).
- Demonstrates input validation and division-by-zero handling.

### 3) `format_specifiers.c`
- Demonstrates key `printf`/`scanf` format specifiers:
  - Integers: `%d`, `%u`, `%x`, `%o`
  - Characters: `%c`
  - Floats: `%f`, `%e`, precision like `%.2f`
  - Strings: `%s` (single word), `fgets` for full line input
  - Field width & alignment basics

---

## Sample Commands

```bash
# Build everything
make

# Run Hello (with arguments)
./bin/hello Alice 42

# Run Calculator
./bin/calculator

# Run Format Specifiers demo
./bin/formats
```

---

## Notes on `scanf`
- `scanf("%d", &x)` reads an integer; **always** pass the address-of `&x`.
- After numeric `scanf`, there may be a leftover newline `\n` in the buffer. 
  Use `getchar()` or prefer `fgets()` + `sscanf()` for robust input.

Happy hacking! 🎯
