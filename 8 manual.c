#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main () {
    int guess=0; 
    int attempts = 0; 
    int num;  
    srand(time(0)); 
    num = rand() %  100 + 1; 
printf("I am thinking of a number 1-100..."); 
do {
    printf("Enter your guess!"); 
    scanf("%d", &guess); 
    attempts++;
    if (guess > num) {
        printf("Your guess is too high!\n"); 
    } else if (guess < num) { 
            printf("Your guess is too low!\n");
            }
        } while (guess != num); {
    printf("The answer is correct! You guessed it in %d attempts.\n", attempts);
return 0; 
}
