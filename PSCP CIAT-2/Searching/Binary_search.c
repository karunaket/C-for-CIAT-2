#include <stdio.h>

int main() {
    int arr[100], n, i, key, low, high, mid;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array in sorted order: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search algorithm
    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Key found at index %d\n", mid);
            break;
        } else if(arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(low > high) {
        printf("Key not found\n");
    }

    return 0;
}
