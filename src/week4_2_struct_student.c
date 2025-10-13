/*
 * week4_2_struct_student.c
 * Author: Mehmet Taha Ünal
 * Student ID: 231AMB077
 * Description:
 * Demonstrates defining and using a struct in C.
 * Defines a 'Student' struct with name, id, and grade fields,
 * creates two Student variables, assigns values, and prints them.
 */

#include <stdio.h>
#include <string.h>

// Define struct Student
struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    struct Student s1, s2;

    // Assign values manually
    strcpy(s1.name, "Defne Goker");
    s1.id = 1001;
    s1.grade = 9.1f;

    strcpy(s2.name, "Emir Olgun");
    s2.id = 1002;
    s2.grade = 8.7f;

    // Print results
    printf("Student 1: %s, ID: %d, Grade: %.1f\n", s1.name, s1.id, s1.grade);
    printf("Student 2: %s, ID: %d, Grade: %.1f\n", s2.name, s2.id, s2.grade);

    return 0;
}
