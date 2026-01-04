#include <stdio.h>
int queue[10];
int front = -1;
int rear = -1;


void insert_into_queue(int value) 
{
    // Implementation of inserting into a simple queue
    if(rear == 9) 
    {
        printf("Queue is full\n");
        return;
    }
    rear++;
    queue[rear] = value;
    if(front == -1) 
    {
        front = 0;
    }
    printf("Inserted %d into queue\n", value);


}
void remove_from_queue() 
{
    
    // Implementation of removing from a simple queue
}
void display_queue() 
{
    // Implementation of displaying the queue
}
int main() 
{
    insert_into_queue(10);
    remove_from_queue();
    return 0;
