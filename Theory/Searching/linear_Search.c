#include <stdio.h>

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;
    int result = linear_search(arr, n, key);
    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);
    return 0;
}
