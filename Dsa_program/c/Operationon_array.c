#include <stdio.h>
int main() {
int arr[100],arr2[50], n, i,n2, choice,pos,value,key,sum,temp,left,right,mid;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements: ");
for (i = 0; i < n; i++) 
  scanf("%d", &arr[i]);

 do {
    printf("\nMenu:\n");
    printf("\n1.Display\n2.Average\n3.Insert\n4.Delete\n5.Linear Search\n6.Binary Search\n7.Reverse\n8.Sort\n9.Merge\n10.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
 switch (choice) {
      case 1: // Display
       for (i=0;i< n ;i++)
        printf("%d ", arr[i]);
        break;
       
      case 2: // Average
            sum = 0;
            for (i = 0; i < n; i++)
            sum += arr[i];
            printf("Average: %.2f\n", (float)sum / n);
            break;
        case 3: // Insert
            printf("Enter the position to insert (0 to %d): ", n);
            scanf("%d", &pos);
            if (pos < 0 || pos > n) {
                printf("Invalid position!\n");
                break;
            }
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            for (i = n; i > pos; i--)
                arr[i] = arr[i - 1];
            arr[pos] = value;
            n++;
            break;
        case 4: // Delete
            printf("Enter the position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);
            if (pos < 0 || pos >= n) {
                printf("Invalid position!\n");
                break;
            }
            for (i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];
            n--;
            break;
        case 5: // Linear Search
            printf("Enter the key to search: ");
            scanf("%d", &key);
            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    printf("Key found at position %d\n", i);
                    break;
                }
            }
            if (i == n)
                printf("Key not found\n");
            break;
        case 6: // Binary Search
            printf("Enter the key to search: ");
            scanf("%d", &key);
            left = 0;
            right = n - 1;
            while (left <= right) {
                mid = left + (right - left) / 2;
                if (arr[mid] == key) {
                    printf("Key found at position %d\n", mid);
                    break;
                } else if (arr[mid] < key) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
                 
            }
            if (left > right)
                printf("Key not found\n");
            break;
        case 7: // Reverse
            for (i = 0; i < n / 2; i++) {
                temp = arr[i];
                arr[i] = arr[n - 1 - i];
                arr[n - 1 - i] = temp;
            }
            printf("Array reversed\n");
            break;
        case 8: // Merging
            printf("Enter the number of elements in second array: ");
            scanf("%d", &n2);
            printf("Enter the elements of second array: ");
            for (i = 0; i < n2; i++)
                scanf("%d", &arr2[i]);
            for (i = 0; i < n2; i++)
                arr[n + i] = arr2[i];
            n += n2;
            printf("Arrays merged\n");
            break;
        case 9: //exit
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");    
  }
   } while (choice != 9);
     return 0;
}