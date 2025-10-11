/*
 * week4_3_struct_database.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define struct Student with fields name, id, grade
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

  // Allocate memory for n Student structs using malloc
  students = malloc(n * sizeof(struct Student));
  if (students == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  // Read student data in a loop
  for (int i = 0; i < n; i++) {
    printf("Enter data for student %d (Name ID Grade): ", i + 1);
    if (scanf("%49s %d %f", students[i].name, &students[i].id,
              &students[i].grade) != 3) {
      printf("Invalid input.\n");
      free(students);
      return 1;
    }
  }

  // Display all student records in formatted output
  printf("\n%-8s %-15s %-6s\n", "ID", "Name", "Grade");
  printf("---------------------------------\n");
  for (int i = 0; i < n; i++) {
    printf("%-8d %-15s %.2f\n", students[i].id, students[i].name,
           students[i].grade);
  }

  // Optional: Compute average grade (example)
  float total = 0.0f;
  for (int i = 0; i < n; i++) {
    total += students[i].grade;
  }
  printf("\nAverage grade: %.2f\n", total / n);

  // Free allocated memory
  free(students);

  return 0;
}
