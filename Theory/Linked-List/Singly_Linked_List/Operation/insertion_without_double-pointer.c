#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* get_node(int value) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = value;
    p->next = NULL;
    return p;
}

// Display list
void display(struct Node* head) {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at beginning
struct Node* insert_beginning(struct Node* head, int value) {
    struct Node* temp = get_node(value);
    temp->next = head;
    return temp;   // new head
}

// Insert at end
struct Node* insert_end(struct Node* head, int value) {
    struct Node* temp = get_node(value);

    if (head == NULL)
        return temp;

    struct Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

// Insert at position (0-based)
struct Node* insert_at_position(struct Node* head, int value, int pos) {
    if (pos == 0)
        return insert_beginning(head, value);

    struct Node* curr = head;
    for (int i = 0; i < pos - 1 && curr != NULL; i++) {
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Invalid position\n");
        return head;
    }

    struct Node* p = get_node(value);
    p->next = curr->next;
    curr->next = p;

    return head;
}

// Main
int main() {
    struct Node* head = NULL;

    head = insert_beginning(head, 10);
    head = insert_beginning(head, 5);
    head = insert_end(head, 20);
    head = insert_end(head, 30);
    head = insert_at_position(head, 15, 2);

    display(head);
    return 0;
}
