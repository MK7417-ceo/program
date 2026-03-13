#include <stdio.h>
#define MAX 3
int stack[MAX];
int top = -1;
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Pushed: %d\n", value);
    }
}

int main() {
    int n, value;
    printf("=== Mohit's Stack Overflow Demo ===\n");
    printf("Stack Capacity is %d\n", MAX);
    
    printf("How many values do you want to push? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }
    
    return 0;
}
