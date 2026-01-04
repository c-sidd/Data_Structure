
//Traversal means visiting or accessing each element of a data structure one by one in a specific order.

#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Enter number of elements in array");
    scanf("%d",&n);
    printf("Enter elements :");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Traversal of array");
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}