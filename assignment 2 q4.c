//Q4
#include <stdio.h>
void main() {
    int marks[] = {88, 99, 75, 99, 60};
    int n = sizeof(marks) / sizeof(marks[0]);
    int count = 0;
    printf("Positions of 99: ");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d ", i + 1);
            count++;
        }
    }
    printf("\nTotal 99s: %d\n", count);
}
