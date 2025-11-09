#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    static int count = 0;
    if (n == 1) {
        count++;
        printf(" %d ) Move disk 1 from %c to %c\n", count, source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    count++;
    printf(" %d )  Move disk %d from %c to %c\n", count, n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}