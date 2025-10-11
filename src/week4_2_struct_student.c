/*
 * week4_2_struct_student.c
 * Author: [Murad Hashimov]
 * Student ID: [241ADB148]
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[]), id (int), grade (float)
// Example:
struct Student {
    char name[50];
    int id;
    float grade;
};

int main(void) {
    struct Student student_1;

    struct Student student_2;

    // TODO: Declare one or more Student variables
    strcpy(student_1.name, "Murad Hashimov");  
    student_1.id = 241148;
    student_1.grade = 80.0;

    // student_2
    strcpy(student_2.name, "Bombo Clad");
    student_2.id = 241567;
    student_2.grade = 95;

    
    printf("Student 1: Name: %s\n, ID: %d\n, Grade: %f\n", student_1.name, student_1.id, student_1.grade);
    //
    printf("Student 2: Name: %s\n, ID: %d\n, Grade: %f\n", student_2.name, student_2.id, student_2.grade);
    

    return 0;
}
