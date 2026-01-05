#include <stdio.h>

int front = -1;
int rear = -1;
#define MAX 10
int queue[MAX];

void enqueue(int value){
    if(rear == MAX-1){
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear] = value;
}

int dequeue(){
    if(front == -1 || front > rear){
        printf("Queue Underflow\n");
        return -1;
    }
    int value = queue[front];
    front++;
    return value;
}
void display(){
    if(front == -1 || front > rear){
        printf("Queue is empty\n");
        return;
    }
    for(int i = front; i <= rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}
void isEmpty(){
    if(front == -1 || front > rear){
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
}
void isFull(){
    if(rear == MAX-1){
        printf("Queue is full\n");
    } else {
        printf("Queue is not full\n");
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // Output: 10 20 30

    printf("Dequeued: %d\n", dequeue()); // Output: Dequeued: 10
    display(); // Output: 20 30

    enqueue(40);
    display(); // Output: 20 30 40

    return 0;
}


