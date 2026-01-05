#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

struct node* get_node(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL)
        return NULL;

    temp->data = x;
    temp->next = NULL;
    return temp;
}

void push(int x)
{
    struct node* temp = get_node(x);
    if (temp == NULL)
    {
        printf("Heap Overflow\n");
        return;
    }
    temp->next = top;
    top = temp;
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    struct node* temp = top;
    printf("Popped element is %d\n", temp->data);
    top = temp->next;
    free(temp);
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Peek element is %d\n", top->data);
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    struct node* temp = top;
    printf("Stack: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();

    return 0;
}
