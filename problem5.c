// File: find_duplicates.c
#include <stdio.h>

int main(void) {
    int arr[] = {1, 3, 3, 4, 5, 5, 7};
    int n = 7;
    int count = 0;                      
    
    printf("Duplicates found: ");
    for (int i = 0; i <= n; i++) {       
        for (int j = i+1; j < n; j++) {  
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                count++;
            }
        }
    }
    printf("(found %d total)\n", count);
    return 0;
}
