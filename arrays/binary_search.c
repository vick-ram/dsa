#include <stdio.h>

// Iterative binary search
int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;
        
        else
            high = mid - 1;
    }

    return -1;
}

// recursive binary search
int binarySearch2(int arr[], int low, int high, int key){

    if (high >= low) {
        int mid = low + (high - low) / 2;

        // if the element is present at the middle
        if (arr[mid] == key)
            return mid;
        
        // if the element is smaller than mid, then
        // it can only be present in the left subarray
        if (arr[mid] > key)
            return binarySearch2(arr, low, mid - 1, key);
        // Else the element can only be found in right subarray
        else
            return binarySearch2(arr, mid + 1, high, key);
    }

    return -1;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 40;
    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        printf("Element not found");
    } else
    {
        printf("Element found at index %d\n", result);
    }


    int result2 = binarySearch2(arr, 0, n - 1, 30);

    printf("Using recursive search\n");

        if (result2 == -1) {
        printf("Element not found");
    } else
    {
        printf("Element found at index %d\n", result2);
    }

    return 0;
}