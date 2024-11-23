//wap for binary to decimal conversion and decimal to binary conversion.
#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0, remainder;
    
    while (binary != 0) {
        remainder = binary % 10;  
        decimal += remainder * pow(2, i);  
        binary /= 10;  
        i++;
    }
    
    return decimal;
}

void decimalToBinary(int decimal) {
    int binary[32];  
    int index = 0;
    
    
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (decimal > 0) {
        binary[index] = decimal % 2;  
        decimal = decimal / 2;  
        index++;
    }
    
    
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int choice, number;
    
    
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            
            printf("Enter a binary number: ");
            scanf("%d", &number);
            printf("Decimal: %d\n", binaryToDecimal(number));
            break;
        
        case 2:
            
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            decimalToBinary(number);
            break;
        
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}