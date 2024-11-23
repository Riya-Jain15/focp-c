//Q3:
#include <stdio.h>
void main() {
    int marks[] = {88, 99, 75, 99, 60};
    int n = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("first 99 scored at position: %d\n", i + 1);
            break;
        }
    }
}
