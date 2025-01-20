#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 40;
    int found = 0;
    int i;

    for (i = 0; i < 5; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}