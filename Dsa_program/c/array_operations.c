#include <stdio.h>

void average(int arr[], int n) {
    int i;
    float sum = 0.0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Average of the array elements = %.2f\n", sum / n);
}

void insert(int arr[], int *n) {
    int pos, value, i;
    printf("Enter the position where you want to insert an element (1 to %d): ", *n + 1);
    scanf("%d", &pos);
    if(pos < 1 || pos > *n + 1) {
        printf("Invalid position!\n");
        return;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to make space
    for (i = *n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;
    (*n)++;
    printf("Element inserted successfully.\n");
}

void deleteElement(int arr[], int *n) {
    int pos, i;
    printf("Enter the position of the element to delete (1 to %d): ", *n);
    scanf("%d", &pos);
    if (pos < 1 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }
    // Shift elements to the left
    for (i = pos - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Element deleted successfully.\n");
}

void linearSearch(int arr[], int n) {
    int key, i, found = 0;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found (Linear Search)\n");
    }
}

void binarySearch(int arr[], int n) {
    int key, i, j, temp;
    int tempArr[100]; // To avoid modifying original array for sorting

    // Copying array to sort
    for (i = 0; i < n; i++) {
        tempArr[i] = arr[i];
    }

    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tempArr[j] > tempArr[j + 1]) {
                temp = tempArr[j];
                tempArr[j] = tempArr[j + 1];
                tempArr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array for Binary Search: ");
    for (i = 0; i < n; i++) {
        printf("%d ", tempArr[i]);
    }
    printf("\n");

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int found = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (tempArr[mid] == key) {
            printf("Element %d found in sorted array at index %d (Binary Search)\n", key, mid);
            found = 1;
            break;
        } else if (tempArr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("Element not found (Binary Search)\n");
    }
}

void display(int arr[], int n) {
    int i;
    if(n == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n) {
    int i, temp;
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    printf("Array reversed successfully.\n");
}

int main() {
    int arr[100];
    int n = 0, i, choice;

    printf("--- Array Operations ---\n");
    printf("Enter number of initial elements in array: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    do {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Average\n");
        printf("2. Insertion\n");
        printf("3. Deletion\n");
        printf("4. Linear Search\n");
        printf("5. Binary Search\n");
        printf("6. Display\n");
        printf("7. Reverse\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if(n > 0) average(arr, n);
                else printf("Array is empty!\n");
                break;
            case 2:
                insert(arr, &n);
                break;
            case 3:
                if(n > 0) deleteElement(arr, &n);
                else printf("Array is empty!\n");
                break;
            case 4:
                if(n > 0) linearSearch(arr, n);
                else printf("Array is empty!\n");
                break;
            case 5:
                if(n > 0) binarySearch(arr, n);
                else printf("Array is empty!\n");
                break;
            case 6:
                display(arr, n);
                break;
            case 7:
                if(n > 0) reverse(arr, n);
                else printf("Array is empty!\n");
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
