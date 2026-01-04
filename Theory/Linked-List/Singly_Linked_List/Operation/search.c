/*
File: searching.c
Operation: Searching an element in Singly Linked List
Time Complexity:
- Best Case: O(1)
- Worst Case: O(n)
*/

#include <stdio.h>
#include <stdlib.h>

// Definition of Node
struct Node {
    int data;
    struct Node* next;
};

// Function to search an element
int search(struct Node* head, int key) {
    struct Node* temp = head;
    int position = 0;

    while (temp != NULL) {
        if (temp->data == key)
            return position;   // element found

        temp = temp->next;
        position++;
    }

    return -1;   // element not found
}

// Main function (demo)
int main() {
    // Creating linked list manually
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    int key = 20;
    int result = search(head, key);

    if (result != -1)
        printf("Element %d found at position %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    return 0;
}
