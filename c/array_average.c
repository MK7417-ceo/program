#include <stdio.h>

int main() {
    int arr[100], n, i;
    float sum = 0.0;

    printf("--- Array Average ---\n");
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Average of the array elements = %.2f\n", sum / n);

    return 0;
}
