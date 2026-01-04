#include <stdio.h>
#include <stdlib.h>

#define MAX_POWER 100   // maximum exponent allowed

/* Linked list node for polynomial */
struct Node {
    int coeff;
    int power;
    struct Node* next;
};

/* Create a new node */
struct Node* get_node(int c, int p) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->coeff = c;
    temp->power = p;
    temp->next = NULL;
    return temp;
}

/* Insert at end (for creating input polynomials) */
struct Node* insert_end(struct Node* head, int c, int p) {
    struct Node* temp = get_node(c, p);

    if (head == NULL)
        return temp;

    struct Node* curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    return head;
}

/* Display polynomial */
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->power);
        temp = temp->next;
        if (temp != NULL)
            printf(" + ");
    }
    printf("\n");
}

/* Polynomial multiplication using hashing */
struct Node* poly_multiply_hash(struct Node* p1, struct Node* p2) {

    int hash[MAX_POWER] = {0};   // hash[power] = coefficient

    /* Multiply terms and store in hash table */
    for (struct Node* t1 = p1; t1 != NULL; t1 = t1->next) {
        for (struct Node* t2 = p2; t2 != NULL; t2 = t2->next) {
            int new_coeff = t1->coeff * t2->coeff;
            int new_power = t1->power + t2->power;
            hash[new_power] += new_coeff;   // combine automatically
        }
    }

    /* Convert hash table to linked list (descending power) */
    struct Node* result = NULL;
    for (int p = MAX_POWER - 1; p >= 0; p--) {
        if (hash[p] != 0) {
            result = insert_end(result, hash[p], p);
        }
    }

    return result;
}

/* Main */
int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* product = NULL;

    /* Polynomial 1: 5x^3 + 4x^2 + 2x */
    poly1 = insert_end(poly1, 5, 3);
    poly1 = insert_end(poly1, 4, 2);
    poly1 = insert_end(poly1, 2, 1);

    /* Polynomial 2: 3x^3 + 2x + 1 */
    poly2 = insert_end(poly2, 3, 3);
    poly2 = insert_end(poly2, 2, 1);
    poly2 = insert_end(poly2, 1, 0);

    printf("Polynomial 1: ");
    display(poly1);

    printf("Polynomial 2: ");
    display(poly2);

    product = poly_multiply_hash(poly1, poly2);

    printf("Product Polynomial: ");
    display(product);

    return 0;
}
