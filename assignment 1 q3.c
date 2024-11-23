//q3 wap to subtract two integers without using minus operator
#include<stdio.h>

int main() {
    int num1,num2,difference;
    printf("Enter any two numbers \n");
    scanf("%d %d", &num1, &num2);
    difference=num1+~num2+1;
    printf("Difference is %d", difference);
    return 0;
}