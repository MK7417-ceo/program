#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("--- Array Merging ---\n");
    
    // First array input
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    if (n1 > 0) {
        printf("Enter %d elements for first array:\n", n1);
        for (i = 0; i < n1; i++) {
            scanf("%d", &arr1[i]);
        }
    }

    // Second array input
    printf("\nEnter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    if (n2 > 0) {
        printf("Enter %d elements for second array:\n", n2);
        for (i = 0; i < n2; i++) {
            scanf("%d", &arr2[i]);
        }
    }

    // Merged array
    int merged[n1 + n2];

    // Merging first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Merging second array
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Displaying the output
    printf("\nMerged array is:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
