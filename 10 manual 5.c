#include <stdio.h> 
 int main () {
    int n; 
    printf("Enter a number >>  "); 
    scanf("%d", &n); 
     if (n < 0) {
        printf("Negative numbers are not allowed!\n"); 
        return 0; 
     } 
        if (n % 2 == 0) {
            int sum = 0; 
    for (int i = 0; i <= n; i += 2) {
        if (i > 0) printf(" + "); 
        printf("%d", i);
        sum += i; 
        } printf("  = %d\n", sum); 
       } else {
           int sum = 0; 
            for (int i = 1; i <= n; i += 2) {
                if (i > 1) printf(" + "); 
                printf("%d", i); 
                sum += i; 
            }
            printf(" = %d\n", sum);  
    }
     return 0; 
 }