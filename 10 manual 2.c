#include <stdio.h> 
int main () {
    int n, j, i, k; 
    printf("Enter a number >>  "); 
    scanf("%d", &n); 
    for (i = 1; i <= n; i += 2) {
        for (j = 0; j < (n - i) / 2; j++) {
        printf(" "); 
    } for (k = 0; k < i; k++) {
        printf("*"); 
    }
    printf("\n"); 
}
 for (i = n - 2; i >= 1; i -= 2) {
    for (j = 0; j < (n - i) / 2; j++) {
        printf(" "); 
    }
    for (k = 0; k < i; k++) {
        printf("*");  
    }
    printf("\n");
 }
 return 0; 
}