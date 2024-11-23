//Q9:
#include <stdio.h>
void main() {
    int marks[] = {10, 20, 15, 30, 25};
    int n = sizeof(marks) / sizeof(marks[0]);
    for (int i = 0; i < n; i++) {
        if ((i == 0 || marks[i] >= marks[i - 1]) && (i == n - 1 || marks[i] >= marks[i + 1])) {
            printf("Peak Element: %d\n", marks[i]);
            break;
        }
    }
}
