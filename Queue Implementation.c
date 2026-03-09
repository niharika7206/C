#include <stdio.h>

int queue[100];
int front=-1,rear=-1;

void enqueue(int x) {

    if(front==-1)
        front=0;

    queue[++rear] = x;
}

void dequeue() {

    printf("Removed: %d\n",queue[front++]);
}

int main() {

    enqueue(5);
    enqueue(10);
    enqueue(15);

    dequeue();
    dequeue();
}
