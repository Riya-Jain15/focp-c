//Q8:
#include <stdio.h>
void main() {
    int marks[] = {45, 60, 75, 90};
    int n = sizeof(marks) / sizeof(marks[0]);
    int max = marks[0], min = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > max)
            max = marks[i];
        if (marks[i] < min)
            min = marks[i];
    }
    printf("Maximum Score: %d\n", max);
    printf("Minimum Score: %d\n", min);
}
