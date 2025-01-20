#include "main.h"

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