// File: reverse_string.c
#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int len = strlen(str);
    int i = 0;
    int j = len; 
    char temp;
    
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--; 
    }
}

int main(void) {
    char message[20] = "HELLO";
    
    printf("Original: %s\n", message);
    reverse(message);
    printf("Reversed: %s\n", message);
    
    return 0;
}
