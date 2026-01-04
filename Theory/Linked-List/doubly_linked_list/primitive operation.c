#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

/* Function declarations */
void insertion_at_begin(int x);
void insertion_at_end(int x);
void insertion_at_pos(int key, int value);
void deletion_begin();
void deletion_end();
void deletion_pos(int pos);
int count_node();
void search(int key);
void display();

/* Create new node */
struct Node* get_node(int x) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = x;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

/* Insert at beginning */
void insertion_at_begin(int x) {
    struct Node* temp = get_node(x);

    if (head == NULL) {
        head = temp;
        return;
    }

    temp->next = head;
    head->prev = temp;
    head = temp;
}

/* Insert at end */
void insertion_at_end(int x) {
    struct Node* temp = get_node(x);

    if (head == NULL) {
        head = temp;
        return;
    }

    struct Node* curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    temp->prev = curr;
}

/* Insert after a given key */
void insertion_at_pos(int key, int value) {
    struct Node* curr = head;

    while (curr != NULL && curr->data != key)
        curr = curr->next;

    if (curr == NULL) {
        printf("Key not found\n");
        return;
    }

    struct Node* temp = get_node(value);

    temp->next = curr->next;
    temp->prev = curr;

    if (curr->next != NULL)
        curr->next->prev = temp;

    curr->next = temp;
}

/* Delete from beginning */
void deletion_begin() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);
}

/* Delete from end */
void deletion_end() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->prev->next = NULL;
    free(curr);
}

/* Delete at position (0-based) */
void deletion_pos(int pos) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (pos == 0) {
        deletion_begin();
        return;
    }

    struct Node* curr = head;
    int count = 0;

    while (curr != NULL && count < pos) {
        curr = curr->next;
        count++;
    }

    if (curr == NULL) {
        printf("Invalid position\n");
        return;
    }

    curr->prev->next = curr->next;

    if (curr->next != NULL)
        curr->next->prev = curr->prev;

    free(curr);
}

/* Count nodes */
int count_node() {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

/* Search element */
void search(int key) {
    struct Node* temp = head;
    int pos = 0;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element not found\n");
}

/* Display list */
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Main function */
int main() {
    int choice, x, key, pos;

    do {
        printf("\n--- DOUBLY LINKED LIST MENU ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert after a Key\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete at Position\n");
        printf("7. Search Element\n");
        printf("8. Count Nodes\n");
        printf("9. Display List\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value: ");
            scanf("%d", &x);
            insertion_at_begin(x);
            break;

        case 2:
            printf("Enter value: ");
            scanf("%d", &x);
            insertion_at_end(x);
            break;

        case 3:
            printf("Enter key and value: ");
            scanf("%d %d", &key, &x);
            insertion_at_pos(key, x);
            break;

        case 4:
            deletion_begin();
            break;

        case 5:
            deletion_end();
            break;

        case 6:
            printf("Enter position: ");
            scanf("%d", &pos);
            deletion_pos(pos);
            break;

        case 7:
            printf("Enter element to search: ");
            scanf("%d", &key);
            search(key);
            break;

        case 8:
            printf("Total nodes = %d\n", count_node());
            break;

        case 9:
            display();
            break;

        case 0:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 0);

    return 0;
}
