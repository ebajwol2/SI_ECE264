// File: sum_positive_bug.c
#include <stdio.h>

int sum_positive(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {    
        if (arr[i] >= 0) {             
            sum += arr[i];
        }
    }
    return sum;
}

int main(void) {
    int n;
    printf("How many numbers? ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 0 || n > 10) {
        printf("n must be between 1 and 10.\n");
        return 1;
    }

    int arr[10];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int result = sum_positive(arr, n);
    printf("Sum of positive numbers = %d\n", result);

    return 0;
}
