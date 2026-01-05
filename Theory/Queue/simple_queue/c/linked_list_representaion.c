#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(rear == NULL){
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}
int dequeue(){
    if(front == NULL){
        printf("Queue Underflow\n");
        return -1;
    }
    struct Node* temp = front;
    int value = front->data;
    front = front->next;
    if(front == NULL){
        rear = NULL;
    }
    free(temp);
    return value;
}
void display(){
    if(front == NULL){
        printf("Queue is empty\n");
        return;
    }
    struct Node* temp = front;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void isEmpty(){
    if(front == NULL){
        printf("Queue is empty\n");
    } else {
        printf("Queue is not empty\n");
    }
}
void isFull(){
    // A linked list based queue is never full unless memory is exhausted
    printf("Queue is not full\n");
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // Output: 10 20 30

    printf("Dequeued: %d\n", dequeue()); // Output: Dequeued: 10
    display(); // Output: 20 30

    isEmpty(); // Output: Queue is not empty
    isFull();  // Output: Queue is not full

    return 0;


    isEmpty(); // Output: Queue is not empty
    isFull();  // Output: Queue is not full

    return 0;
}