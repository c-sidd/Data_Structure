#include <stdio.h>

void counting_sort(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    int count[max + 1];
    for (int i = 0; i <= max; i++)
        count[i] = 0;

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;
      printf("Before sorting: \n");
  for(int i =0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
    printf(" \nAfter sorting: \n");
    counting_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
