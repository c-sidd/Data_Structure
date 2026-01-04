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

// Delete from beginning
struct Node* delete_beginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);

    return head;
}

// Delete from end
struct Node* delete_end(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct Node* curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    free(curr->next);
    curr->next = NULL;

    return head;
}

// Delete at given position (0-based)
struct Node* delete_at_position(struct Node* head, int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (pos == 0)
        return delete_beginning(head);

    struct Node* curr = head;
    for (int i = 0; i < pos - 1 && curr->next != NULL; i++) {
        curr = curr->next;
    }

    if (curr->next == NULL) {
        printf("Invalid position\n");
        return head;
    }

    struct Node* temp = curr->next;
    curr->next = temp->next;
    free(temp);

    return head;
}

// Main
int main() {
    struct Node* head = NULL;

    // create list
    head = get_node(10);
    head->next = get_node(20);
    head->next->next = get_node(30);
    head->next->next->next = get_node(40);

    display(head);

    head = delete_beginning(head);
    display(head);

    head = delete_end(head);
    display(head);

    head = delete_at_position(head, 1);
    display(head);

    return 0;
}
/*
| Deletion Type | Time Complexity | Reason               |
| ------------- | --------------- | -------------------- |
| Beginning     | **O(1)**        | No traversal         |
| End           | **O(n)**        | Must reach last node |
| At position   | **O(n)**        | Traversal required   |
*/