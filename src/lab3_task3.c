/*
 * Lab 3, Task 3
 * Student Name, Student ID
 *
 * Implement basic string handling functions.
 * Write your own versions of:
 *   - my_strlen (finds string length)
 *   - my_strcpy (copies string from src to dest)
 *
 * Rules:
 *   - Do not use <string.h> functions for strlen/strcpy.
 *   - Use loops and manual pointer/array access.
 *
 * Example:
 *   char s[] = "hello";
 *   int len = my_strlen(s);   // should return 5
 *
 *   char buffer[100];
 *   my_strcpy(buffer, s);     // buffer now contains "hello"
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    // TODO: Test your functions here
    char test[] = "Programming in C";
    char copy[100];

    int len = my_strlen(test);
    printf("Length: %d\n", len);

    my_strcpy(copy, test);
    printf("Copy: %s\n", copy);

    return 0;
}

// Implement functions below
int my_strlen(const char *str) {
    // Count characters using pointer arithmetic
    int count = 0;
    const char *ptr = str;   // point to the first character
    while(*ptr != '\0') {    // stop at null terminator
        count++;
        ptr++;               // move to next character
    }
    return count;
}

void my_strcpy(char *dest, const char *src) {
    // Copy string using pointers
    while(*src != '\0') {   // until end of source
        *dest = *src;       // copy character
        dest++;             // move dest pointer
        src++;              // move src pointer
    }
    *dest = '\0';           // add null terminator
}
