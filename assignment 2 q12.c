#include <stdio.h>

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteElement(int arr[], int *size, int pos) {
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Array before delete: ");
    displayArray(arr, size);

    // Delete from front
    deleteElement(arr, &size, 0);

    // Delete from position 2
    deleteElement(arr, &size, 2);

    // Delete from end
    deleteElement(arr, &size, size - 1);

    printf("Array after delete: ");
    displayArray(arr, size);

    return 0;
}
