#include <stdio.h>

int main() {
    int arr[100], n, i, key, choice, found = 0;

    printf("--- Array Searching ---\n");
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    printf("\nChoose Search Method:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Linear Search
        for (i = 0; i < n; i++) {
            if (arr[i] == key) {
                printf("Element %d found at position %d (index %d)\n", key, i + 1, i);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Element not found using Linear Search.\n");
        }
    } else if (choice == 2) {
        // Binary Search
        int j, temp;
        // First sort the array for Binary Search using Bubble Sort
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        printf("\nSorted array for Binary Search: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        int low = 0, high = n - 1, mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                printf("Element %d found in sorted array at index %d\n", key, mid);
                found = 1;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (!found) {
            printf("Element not found using Binary Search.\n");
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
