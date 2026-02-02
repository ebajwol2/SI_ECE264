// File: average_bug.c
#include <stdio.h>

double compute_average(int *arr, int n) {
    int sum = 0;
    int i;
    while (i <= n) {                 
        sum += arr[i];
        i++;
    }                        
    return sum / n;              
}

int main(void) {
    int n;
    printf("How many numbers? ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n <= 0) {
        printf("n must be positive.\n");
        return 1;
    }

    int arr[10];
    if (n > 10) {
        printf("Max 10 numbers.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    double avg = compute_average(arr, n);
    printf("Average = %f\n", avg);

    return 0;
}
