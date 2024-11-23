//wap to print pascals triangle
#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int triangle[rows][rows];
    for (i = 0; i < rows; i++) {
        triangle[i][0] = triangle[i][i] = 1;
        for (j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }

       
        printf("\n");
    }

    return 0;