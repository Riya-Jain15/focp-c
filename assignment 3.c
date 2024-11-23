#include <stdio.h>
#include <math.h>

// Function declarations
void addition();
void subtraction();
void multiplication();
void division();
void logarithmic_value();
void square_root();

int main() {
    int choice;
    
    do {
        // Menu display
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic values\n");
        printf("6. Square roots\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: logarithmic_value(); break;
            case 6: square_root(); break;
            case 7: printf("Exiting the program. Goodbye!\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);
    
    return 0;
}

// Function definitions
void addition() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

void subtraction() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

void multiplication() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

void division() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0)
        printf("Result: %.2lf\n", a / b);
    else
        printf("Error: Division by zero is not allowed.\n");
}

void logarithmic_value() {
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if (a > 0)
        printf("Result: %.2lf\n", log(a));
    else
        printf("Error: Logarithm of non-positive numbers is undefined.\n");
}

void square_root() {
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if (a >= 0)
        printf("Result: %.2lf\n", sqrt(a));
    else
        printf("Error: Square root of negative numbers is not real.\n");
}
