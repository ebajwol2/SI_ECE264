// File: demo_offbyone.c
#include <stdio.h>

int sum_first_n(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(void) {
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int s = sum_first_n(arr, n);
    printf("Sum of first %d elements = %d\n", n, s);
    return 0;
}
