#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("--- Array Display ---\n");
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

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
