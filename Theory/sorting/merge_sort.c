#include<stdio.h>
  void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];


    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[],int l,int h)
{
  if(l<h)
  {
    int mid = (l+h)/2;
     merge_sort(arr,l,mid);
     merge_sort(arr,mid+1,h);
     merge(arr,l,mid,h);
  }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1,3,5,7,9,2,4,6,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: ");
    printArray(arr, n);

    merge_sort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}