//Q14:
#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int foundDuplicate = 0;
    printf("Duplicates: ");
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                count++;
            }
        }
        if (count >= 1) {
            int alreadyPrinted = 0;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (!alreadyPrinted) {
                printf("%d ", arr[i]);
                foundDuplicate = 1;
            }
        }
    }
    if (!foundDuplicate) {
        printf("-1");
    }
    printf("\n");
}

int main() {
    int arr1[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int size1 = 10;

    int arr2[] = {5, 40, 1, 40, 100000, 1, 5, 1};
    int size2 = 8;

    printf("Array 1: ");
    findDuplicates(arr1, size1);

    printf("Array 2: ");
    findDuplicates(arr2, size2);

    return 0;
}
