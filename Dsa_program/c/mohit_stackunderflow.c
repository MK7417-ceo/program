#include <stdio.h>
#define MAX 100
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
void pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
    } else {
        printf("Popped: %d\n", stack[top--]);
    }
}
int main() {
    int push_count, pop_count, value;
    printf("=== Mohit's Stack Underflow Demo ===\n");
    
    printf("How many values do you want to push initially? ");
    scanf("%d", &push_count);
    for (int i = 0; i < push_count; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }
    printf("\nHow many values do you want to pop? ");
    scanf("%d", &pop_count);
    
    for (int i = 0; i < pop_count; i++) {
        pop();
    }
    return 0;
}
