//q2 wap to read two numbers and print their hcf
#include <stdio.h>

int main() {
    int a, b, t;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int original_a = a, original_b = b;

    while (b != 0) {
        t = b;
        b = a % b; 
        a = t;  
    }

    printf("The HCF of %d and %d is %d\n", original_a, original_b, a);
    return 0;
}