#include<stdio.h>
#include<stdlib.h>

struct Node {
    int coeff;
    int power;
    struct Node *  next;
    
};

struct Node * get_node(int c, int p)
{
    struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
    temp -> coeff = c;
    temp -> power = p;
    temp -> next =  NULL;
    return temp;
}
struct Node * insert_end(struct Node * head,int c , int p)
{
    struct Node * temp = get_node(c,p);
    struct Node * curr = head;
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    while(curr -> next != NULL)
    {
        curr = curr -> next;
    } 
    curr -> next = temp;
    return head;
}

struct Node * poly_subtraction(struct Node * poly1,struct Node * poly2)
{
    struct Node * poly_diff= NULL;
     while(poly1!=NULL && poly2!=NULL)
     {
        if(poly1->power>poly2->power)
        {
           poly_diff=insert_end(poly_diff,poly1->coeff,poly1->power);
           poly1=poly1->next;
        }
        else if(poly1->power<poly2->power)
        {
           poly_diff=insert_end(poly_diff,poly2->coeff,poly2->power);
           poly2=poly2->next;
        }
        else{
              poly_diff=insert_end(poly_diff,poly1->coeff - poly2->coeff,poly1->power);
              poly1=poly1->next;
              poly2=poly2->next;
        }
     }
    return poly_diff;
}
void display(struct Node * head)
{
    struct Node * curr = head;
    while(curr != NULL)
    {
        printf("%dx^%d",curr -> coeff,curr -> power);
        curr = curr -> next;
        if (curr != NULL)
        {
            printf(" + ");
        }
    }
    printf("\n");
}

int main()
{
    struct Node * poly1 = NULL;
    struct Node * poly2 = NULL;
    struct Node * poly_diff = NULL;

    // Creating first polynomial: 5x^3 + 4x^2 + 2x^1
    poly1 = insert_end(poly1, 5, 3);
    poly1 = insert_end(poly1, 4, 2);
    poly1 = insert_end(poly1, 2, 1);

    // Creating second polynomial: 3x^3 + 2x^1 + 1
    poly2 = insert_end(poly2, 3, 3);
    poly2 = insert_end(poly2, 2, 1);
    poly2 = insert_end(poly2, 1, 0);

    printf("First Polynomial: ");
    display(poly1);

    printf("Second Polynomial: ");
    display(poly2);

    poly_diff = poly_subtraction(poly1, poly2);

    printf("Resultant Polynomial after Subtraction: ");
    display(poly_diff);

    return 0;
}   