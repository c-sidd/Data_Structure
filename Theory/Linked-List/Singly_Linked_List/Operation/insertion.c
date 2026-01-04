#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* get_node(int value) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = value;
    p->next = NULL;
    return p;
}
void display(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insert_beginning(struct Node** head, int value) {
    struct Node* temp = get_node(value);
    temp->next = *head;
    *head = temp;
}

void insert_end(struct Node** head, int value) {
    struct Node* temp = get_node(value);

    if (*head == NULL) {
        *head = temp;
        return;
    }

    struct Node* curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
}

// Insert at position (0-based)
void insert_at_position(struct Node** head, int value, int pos) {
    if (pos == 0) {
        insert_beginning(head, value);
        return;
    }

    struct Node* curr = *head;
    for (int i = 0; i < pos - 1 && curr != NULL; i++) {
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Invalid position\n");
        return;
    }

    struct Node* p = get_node(value);
    p->next = curr->next;
    curr->next = p;
}

int main() {
    struct Node* head = NULL;

    insert_beginning(&head, 10);
    insert_beginning(&head, 5);
    insert_end(&head, 20);
    insert_end(&head, 30);
    insert_at_position(&head, 15, 2);

    display(head);

    return 0;
}

/*
If we want to update the head pointer inside a function
without returning it, we must use a double pointer (Node**).

A double pointer stores the address of the head pointer,
so changes made inside the function affect the original head.

If we use a single pointer (Node*), the head is passed by value.
In that case, we must explicitly return the updated head
and assign it in the calling function.
main():
struct Node* head;

head
 └──► [10] ─► [20] ─► [30] ─► NULL


function():
struct Node** head;

head
 └──► &head (from main)

*head
 └──► [10] ─► [20] ─► [30] ─► NULL

*/
