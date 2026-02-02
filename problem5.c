// File: find_duplicates.c
#include <stdio.h>

int main(void) {
    int arr[] = {1, 3, 3, 4, 5, 5, 7};  // Has duplicates: 3,5
    int n = 7;
    int count = 0;                       // BUG #1: Uninitialized? No - this is good!
    
    printf("Duplicates found: ");
    for (int i = 0; i <= n; i++) {       // BUG #2: Off-by-one (but you know this!)
        for (int j = i+1; j < n; j++) {  // BUG #3: WRONG nested loop bounds!
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                count++;
            }
        }
    }
    printf("(found %d total)\n", count);
    return 0;
}
