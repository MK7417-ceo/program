#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("--- Array Deletion ---\n");
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

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
