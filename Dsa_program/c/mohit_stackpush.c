#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("Successfully pushed %d\n", value);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (bottom to top): ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("=== Mohit's Stack Push Operation ===\n");
    printf("How many elements do you want to push? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        push();
    }
    
    printf("\nFinal ");
    display();
    
    return 0;
}
