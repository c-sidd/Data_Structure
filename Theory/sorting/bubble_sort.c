#include<stdio.h>
void swap(int *p ,int *q)
{
        int temp = *p;
        *p = *q;
        *q = temp;
}
int* bubble_sort(int arr[],int n){
    for(int i =0;i<n-1;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    return arr;
}
int main()
{
  int arr[] = {1,3,5,7,9,2,4,6,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Before sorting: \n");
  for(int i =0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
printf(" \nAfter sorting: \n");
  int *p = bubble_sort(arr,n);
  
  for(int i =0;i<n;i++)
  {
    printf("%d ",p[i]);
  }

}