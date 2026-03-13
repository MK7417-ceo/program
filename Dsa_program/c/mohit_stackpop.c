#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        top++;
        stack[top] = value;
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
    } else {
        printf("Successfully popped: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Current Stack elements (bottom to top): ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int n, value, pop_count;
    printf("=== Mohit's Stack Pop Operation ===\n");
    
    printf("First, let's add some elements.\nHow many elements to push? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter value to push: ");
        scanf("%d", &value);
        push(value);
    }
    printf("\n");
    display();
    
    printf("\nHow many elements do you want to pop? ");
    scanf("%d", &pop_count);
    
    for (int i = 0; i < pop_count; i++) {
        pop();
    }
    
    printf("\nFinal ");
    display();
    
    return 0;
}
