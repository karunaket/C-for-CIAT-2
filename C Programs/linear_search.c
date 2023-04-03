/* Develop a C program to perform Linear Search (get numbers of the user’s choice) */

#include <stdio.h>

int linearSearch(int arr[], int n, int key);

int main() {
    int n, key, index;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    index = linearSearch(arr, n, key);
    
    if (index != -1) {
        printf("%d found at index %d\n", key, index);
    } else {
        printf("%d not found in the array\n", key);
    }
    
    return 0;
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    
    return -1;
}