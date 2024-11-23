// q4 wap to accept two integers and swap them using for different methods
#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 1: Using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Method 1: Using temporary variable => num1 = %d, num2 = %d\n", num1, num2);

    printf("Enter two integers again: ");
    scanf("%d %d", &num1, &num2);

    // Method 2: Using arithmetic operations
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Method 2: Using arithmetic operations => num1 = %d, num2 = %d\n", num1, num2);

    printf("Enter two integers again: ");
    scanf("%d %d", &num1, &num2);

    // Method 3: Using bitwise XOR
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    printf("Method 3: Using bitwise XOR => num1 = %d, num2 = %d\n", num1, num2);

    printf("Enter two integers again: ");
    scanf("%d %d", &num1, &num2);

    // Method 4: Using pointers
    int *pnum1 = &num1, *pnum2 = &num2;
    *pnum1 = *pnum1 + *pnum2;
    *pnum2 = *pnum1 - *pnum2;
    *pnum1 = *pnum1 - *pnum2;
    printf("Method 4: Using pointers => num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
    