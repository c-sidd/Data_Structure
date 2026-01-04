// Insert a element into an array
// time complexity :0(n)

#include<stdio.h>
void display(int * arr,int n)
{   printf("Elements of array are: ");
    for (int i =0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100] ={
        1,2,3,4,5,6
    };
    int  n=6;
    display(arr,n);
    int pos,key;
    printf("Enter the index and element inserted in the array");
    scanf("%d%d",&pos,&key);

    for(int i =n ;i>pos;i--)
    {
         arr[i]=arr[i-1];
    }
    arr[pos]= key;
    n++;

    display(arr,n);

    return 0;


}