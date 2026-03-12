#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("--- Array Insertion ---\n");
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Enter the position where you want to insert an element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to make space
    for (i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
