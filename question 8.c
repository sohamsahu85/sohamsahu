#include <stdio.h>

int main() {
    int arr[] = {11,12,13,14,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }


    for (int i = 0; i < n - 1; i += 2) {
        int temp = ptr[i];
        ptr[i] = ptr[i + 1];
        ptr[i + 1] = temp;
    }

    printf("Swapped array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
