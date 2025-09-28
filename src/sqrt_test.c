#include <errno.h>
#include <fenv.h>
#include <math.h>
#include <stdio.h>

// Compilation instructions!
// for compiling math you need add -lm at the very end!
// 1. The C Standard vs. Implementations

// The C standard (ISO/IEC 9899) says that functions like sqrt, sin, log,
// feclearexcept, etc. exist in the library.

// But the standard doesn’t say how they must be organized in the actual runtime
// system.

// Compiler vendors (like GCC on Unix) are free to put them in a separate
// library (libm) instead of the default libc.

// 2. Why Split into libc and libm?

// Historical reason (Unix in the 1970s):

// Early C programs often didn’t need floating-point math (think of simple
// utilities and text processing).

// Floating-point math routines were large and sometimes required special
// hardware support (math co-processors).

// To avoid bloating every program, they were separated into libm.

// That way, only programs that actually needed math functions had to pay the
// cost of linking libm.

// 3. GCC Linking Rules

// By default, gcc file.c -o prog links libc, because every C program needs
// basic functions (printf, malloc, etc.).

// But it does not link libm unless you explicitly request it with -lm.

// Linker order matters:

// gcc file.c -lm -o prog   # works
// gcc -lm file.c -o prog   # usually fails

// because the linker only searches libraries after seeing unresolved
// references.

// #pragma STDC FENV_ACCESS ON

int main(void) {
  printf("sqrt(100) = %f\n", sqrt(100));

  printf("sqrt(-1.0) = %f\n", sqrt(-1.0));

  errno = 0;
  feclearexcept(FE_ALL_EXCEPT);

  printf("sqrt(-1.0) = %f\n", sqrt(-1.0));

  if (errno == EDOM) perror("errno == EDOM");

  if (fetestexcept(FE_INVALID)) puts("FE_INVALID raised");

  return 0;
}