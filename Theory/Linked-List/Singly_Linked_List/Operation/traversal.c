/*
File: traversal.c
Operation: Traversal of Singly Linked List
Time Complexity: O(n)
*/

#include <stdio.h>
#include <stdlib.h>

// Definition of Node
struct Node {
    int data;
    struct Node* next;
};

// Function to traverse and display the linked list
void traversal(struct Node* head) {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("Linked List is empty\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function (demo)
int main() {
    // Creating nodes manually
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    traversal(head);

    return 0;
}
