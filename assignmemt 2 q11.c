//Q11:
#include <stdio.h>

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int pos, int element) {
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*size)++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Array before insert: ");
    displayArray(arr, size);

    // Insert at front
    insertElement(arr, &size, 0, 10);

    // Insert at position 3
    insertElement(arr, &size, 3, 20);

    // Insert at end
    insertElement(arr, &size, size, 30);

    printf("Array after insert: ");
    displayArray(arr, size);

    return 0;
}
