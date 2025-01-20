#include "main.h"

int main() {
    int arr[5] = {90, 70, 10, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;

    sort(arr, 6);

    for (int j = 0; j < 5; j++) {
        printf("Element at index %d is %d\n", j, arr[j]);
    }

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        printf("Element not found\n");
    } else
    {
        printf("Element found at index %d\n", result);
    }


    int result2 = binarySearch2(arr, 0, n - 1, 30);

    printf("Using recursive search\n");

        if (result2 == -1) {
        printf("Element not found\n");
    } else
    {
        printf("Element found at index %d\n", result2);
    }

    return 0;
}