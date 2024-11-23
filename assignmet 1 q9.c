//wap to print following pyramid
#include <stdio.h>

int main() {
    int i, j, k, n = 5;  
    for (i = 1; i <= n; i++) {
       
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);  
        }

        for (k = 1; k <= 2 * (n - i); k++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);  
        }

        printf("\n");
    }

    return 0;
}