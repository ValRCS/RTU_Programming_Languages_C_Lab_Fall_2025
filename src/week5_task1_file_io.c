// week5_task1_file_io.c
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp;
  char filename[12] = "data.txt";
  char line[256];
  int val_line = 0;

  // BONUS: ask user for filename instead of using default "data.txt"
  printf("Write down the name of the file - ");
  scanf("%11s", filename);

  // TODO: 1. Open file for writing (mode = "w")
  fp = fopen(filename, "w");
  // TODO: 2. Check if file opened successfully
  if (fp == NULL) {
    return 1;
  }
  // TODO: 3. Write 2–3 lines of text to the file using fprintf()
  fprintf(fp, "Vote for Murad Hashimov! \n");
  fprintf(fp, "RTU is top G \n");
  // TODO: 4. Close the file
  fclose(fp);

  // TODO: 5. Open file again for reading (mode = "r")
  fp = fopen(filename, "r");

  if (fp == NULL) {
    return 1;
    ;
  }

  // TODO: 6. Use fgets() in a loop to read and print each line to the console
  for (; fgets(line, sizeof(line), fp) != NULL; val_line++) {
    printf("%s", line);
  }

  // BONUS: count number of lines read
  printf("Amount of lines read - %d \n", val_line);

  // TODO: 7. Close the file

  fclose(fp);

  return 0;
}
