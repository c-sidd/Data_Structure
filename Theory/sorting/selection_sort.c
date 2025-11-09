#include <stdio.h>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
      printf("Before sorting: \n");
  for(int i =0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
printf(" \nAfter sorting: \n");
    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
