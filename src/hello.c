
#include <stdio.h>

int main(int argc, char *argv[]) {
  // My first C program!
  printf("Hello, RTU World from C Lab in September 2025!\n");
  printf("You passed %d argument(s).\n", argc - 1);
  for (int i = 1; i < argc; ++i) {
    printf("  arg[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
