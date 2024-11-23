//Q1:
#include <stdio.h>
void main() {
    int marks[] = {45, 60, 75, 90};
    int n = sizeof(marks) / sizeof(marks[0]);
    printf("Original Marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
    for (int i = 0; i < n; i++) {
        marks[i] += 5;
    }
    printf("\nUpdated Marks: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
}
