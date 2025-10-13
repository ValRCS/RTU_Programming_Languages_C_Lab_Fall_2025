// week5_task2_struct_save_load.c
// Task 2: Save and load structured records from a file
// Week 5 – Files & Modular Programming
// TODO: Complete function implementations and file handling logic.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
    float gpa;
} Student;

// Function prototypes
void save_student(Student s, const char *filename);
Student load_student(const char *filename);

int main(void) {
    Student s1;
    strcpy(s1.name, "Alice");
    s1.age = 21;
    s1.gpa = 3.75f;

    const char *filename = "student.txt";

    // TODO: Call save_student() to save student data to file
    save_student(s1, filename);
    // TODO: Call load_student() to read data back into a new struct
    Student loaded = load_student(filename);
    // TODO: Print loaded data to confirm correctness
    printf("Loaded data:\n");
    printf("Name: %s\n", loaded.name);
    printf("Age: %d\n", loaded.age);
    printf("GPA: %.2f\n", loaded.gpa);

    return 0;
}

// TODO: Implement save_student()
// Open file for writing, check errors, write fields, then close file
void save_student(Student s, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error \n");
        exit(1);
    }

    fprintf(fp, "%s\n%d\n%.2f\n", s.name, s.age, s.gpa);
    fclose(fp);
}

// TODO: Implement load_student()
// Open file for reading, check errors, read fields, then close file
Student load_student(const char *filename) {
    Student s;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error \n");
        exit(1);
    }

    fscanf(fp, "%s", s.name);
    fscanf(fp, "%d", &s.age);
    fscanf(fp, "%f", &s.gpa);

    fclose(fp);
    return s;
}
