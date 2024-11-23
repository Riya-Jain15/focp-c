//Q13:
#include <stdio.h>

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotateClockwise(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Original array: ");
    displayArray(arr, size);

    rotateClockwise(arr, size);

    printf("Rotated array: ");
    displayArray(arr, size);

    return 0;
}
