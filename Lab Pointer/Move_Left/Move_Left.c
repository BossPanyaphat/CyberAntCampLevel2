#include <stdio.h>

void shiftLeft(int *arr, int size, int frequency) {
    for (int f = 0; f < frequency; f++) {
        int firstElement = *arr;

        for (int i = 0; i < size - 1; i++) {
            *(arr + i) = *(arr + i + 1);
        }

        *(arr + size - 1) = firstElement;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size, frequency;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &frequency);

    shiftLeft(arr, size, frequency);

    printArray(arr, size);

    return 0;
}
