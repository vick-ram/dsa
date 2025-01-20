#include <stdio.h>

int main() {
    int score[6] = {10, 20, 30, 40, 50};
    int i;
    // Priniting array elemets using for loop
    for (i = 0; i < 5; i++) {
        printf("Element at index %d is %d\n", i, score[i]);
    }

    // Insertion
    int pos = 2, value = 60;
    for (i = 5; i > pos; i--) {
        score[i] = score[i - 1];
    }

    score[pos] = value;

    for (i = 0; i < 6; i++) {
        printf("Updated array elements\n");
        for (i = 0; i < 6; i++) {
        printf("Element at index %d is %d\n", i, score[i]);
    }
    }
    return 0;
}