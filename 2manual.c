#include <stdio.h> 
int main () {
int count; 
int i=1; 
printf("Enter the number you want the multiplication table of!\n); 
scanf("%d", &count); 
while (i<=10); {
int result = count * i; 
printf("%d x %d = %d\n", count, i, result); 
i = i + 1; 
} 
return 0; 
}