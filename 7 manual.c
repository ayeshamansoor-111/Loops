#include <stdlib.h> 
int main () {
    int guess; 
    int attempts = 0; 
    int num;  
    num = rand() %  100 + 1; 
printf("I am thinking of a number 1-100..."); 
do {
    scanf("%d", &guess); 
    attempts++;
    if (guess > num) {
        printf("Your guess is too high!"); 
    } else if (guess < num) { 
            printf("Your guess is too low!");
            }
        } while (guess != num); 
    printf("The answer is correct! You guessed it in %d attempts.\n", attempts); 
return 0; 
}