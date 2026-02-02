// File: max_bug.c
#include <stdio.h>

int find_max(int *arr, int n) {
    int max;                 
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(void) {
    int n;
    printf("How many numbers? ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10) {
        printf("Bad n.\n");
        return 1;
    }

    int arr[10];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m = find_max(arr, n);
    printf("Max = %d\n", m);
    return 0;
}
