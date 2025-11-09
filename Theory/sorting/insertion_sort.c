#include<stdio.h>
int * insertion_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {   int j = i+1;
        while(j>0&&arr[j]<arr[j-1])
        {
           int temp = arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=temp;
             j--;
        }
    }return arr;
}
int main(){
   int arr[]={1,3,5,7,9,2,4,6,8};
   int n = sizeof(arr)/sizeof(arr[0]);
     printf("Before sorting: \n");
  for(int i =0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
printf(" \nAfter sorting: \n");
   int *p = insertion_sort(arr,n);
   for(int i =0;i<n;i++)
  {
    printf("%d ",p[i]);
  }

}
