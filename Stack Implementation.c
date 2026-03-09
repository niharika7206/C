#include <stdio.h>

int stack[100], top=-1;

void push(int x) {
    stack[++top] = x;
}

void pop() {
    printf("Popped: %d\n",stack[top--]);
}

int main() {

    push(10);
    push(20);
    push(30);

    pop();
    pop();
}
