/*
 * week4_3_struct_database.c
 * Author: [Mina Senturk]
 * Student ID: [231ADB258]
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void chomp_newline(char *s) {
  if (!s) return;
  size_t len = strlen(s);
  if (len && s[len - 1] == '\n') s[len - 1] = '\0';
}
static void discard_line(void) {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}

// TODO: Define struct Student with fields name, id, grade

struct Student {
  char name[50];
  int id;
  float grade;
};

int main(void) {
  int n;
  struct Student *students = NULL;

  printf("Enter number of students: ");
  if (scanf("%d", &n) != 1 || n <= 0) {
    printf("Invalid number.\n");
    return 1;
  }

  // TODO: Allocate memory for n Student structs using malloc

  students = malloc((size_t)n * sizeof(struct Student));
  if (students == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // TODO: Read student data in a loop

  discard_line();  // scanf("%d",&n) sonrası \n temizle
  for (int i = 0; i < n; i++) {
    printf("Enter data for student %d:\n", i + 1);

    printf("  Name: ");
    if (!fgets(students[i].name, sizeof(students[i].name), stdin)) {
      printf("  Error reading name.\n");
      free(students);
      return 1;
    }
    chomp_newline(students[i].name);

    printf("  ID: ");
    if (scanf("%d", &students[i].id) != 1) {
      printf("  Error reading ID.\n");
      free(students);
      return 1;
    }

    printf("  Grade: ");
    if (scanf("%f", &students[i].grade) != 1) {
      printf("  Error reading grade.\n");
      free(students);
      return 1;
    }

    discard_line();
  }

  // TODO: Display all student records in formatted output

  printf("\n%-6s %-20s %-6s\n", "ID", "Name", "Grade");
  for (int i = 0; i < n; i++) {
    printf("%-6d %-20s %-6.1f\n", students[i].id, students[i].name,
           students[i].grade);
  }

  // Optional: Compute average grade or find top student

  // TODO: Free allocated memory

  free(students);

  return 0;
}
