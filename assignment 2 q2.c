//Q2:
#include <stdio.h>
void main() {
    int marks[] = {85, 73, 55, 30};
    int n = sizeof(marks) / sizeof(marks[0]);
    printf("Grades:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 75)
            printf("Marks: %d, Grade: A\n", marks[i]);
        else if (marks[i] >= 60)
            printf("Marks: %d, Grade: B\n", marks[i]);
        else if (marks[i] >= 40)
            printf("Marks: %d, Grade: C\n", marks[i]);
        else
            printf("Marks: %d, Grade: D\n", marks[i]);
    }
}
