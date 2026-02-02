// File: sum_ptr_bug.c
#include <stdio.h>

int sum_array(int *arr, int n) {
    int sum = 0;
    int *p = arr;
    for (int i = 0; i <= n; i++) {
        sum += *p;
        if (i % 2 == 0) {
            p++;                      
        }
    }
    return sum;
}

int main(void) {
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int s = sum_array(arr, n);
    printf("Sum = %d\n", s);
    return 0;
}
