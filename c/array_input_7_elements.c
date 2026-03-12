#include <stdio.h>

int main() {
    int list[7]; // Array (list) to hold exactly 7 elements
    int i;

    printf("Please enter 7 elements for the list:\n");

    // Taking input from the user
    for(i = 0; i < 7; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &list[i]);
    }

    // Displaying the input elements
    printf("\nThe elements you entered are:\n");
    for(i = 0; i < 7; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");

    int search_item, found = 0;
    // Ask for number to search
    printf("\nEnter the number you want to search for: ");
    scanf("%d", &search_item);

    // Search for it
    for(i = 0; i < 7; i++) {
        if(list[i] == search_item) {
            printf("Element %d found at index %d.\n", search_item, i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d is not in the list.\n", search_item);
    }

    return 0;
}
