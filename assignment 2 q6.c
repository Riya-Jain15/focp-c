//Q6:
#include <stdio.h>
void main() {
    int marks[] = {45, 60, 75, 90};
    int n = sizeof(marks) / sizeof(marks[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    printf("Average score: %.2f\n", (float)sum / n);
}