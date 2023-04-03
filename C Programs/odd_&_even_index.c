/* Write a C program to display the elements stored in odd index positions and even index positions. */

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    printf("Elements at odd index positions: ");
    for(i = 1; i < 10; i += 2) {
        printf("%d ", arr[i]);
    }

    printf("\nElements at even index positions: ");
    for(i = 0; i < 10; i += 2) {
        printf("%d ", arr[i]);
    }

    return 0;
}