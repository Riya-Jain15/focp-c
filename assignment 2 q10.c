//Q10:
#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void main() {
    int marks[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(marks) / sizeof(marks[0]);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(marks[i]))
            count++;
    }
    printf("Prime Count: %d\n", count);
}
