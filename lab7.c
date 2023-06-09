#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp;

    // Read input elements
    printf("Enter %d elements: ", 5);
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5- i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}