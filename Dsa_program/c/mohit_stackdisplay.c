#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements (top to bottom):\n");
    for (int i = top; i >= 0; --i) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int n, value;
    printf("How many values do you want to push? ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }

    display();
    return 0;
}
