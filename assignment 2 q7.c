//Q7:
#include <stdio.h>
void main() {
    int marks[] = {45, 60, 75, 90};
    int n = sizeof(marks) / sizeof(marks[0]);
    printf("Even/Odd Check:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] % 2 == 0)
            printf("%d is Even\n", marks[i]);
        else
            printf("%d is Odd\n", marks[i]);
    }
}
