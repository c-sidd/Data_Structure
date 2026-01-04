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
    int pos;
    printf("Enter the index deleteed from the array");
    scanf("%d",&pos);

    for(int i =pos ;i<n-1;i++)
    {
         arr[i]=arr[i+1];
    }
   
    n--;

    display(arr,n);

    return 0;


}