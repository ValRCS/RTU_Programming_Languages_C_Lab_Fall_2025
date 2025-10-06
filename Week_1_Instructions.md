
# Lab 1 — C Basics (Week 1)

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
