// Build a very simple guessing game
#include <stdio.h>

int main(){
  int secret_number = 5;
  int guess;
  int guesses_took = 0;
  int guess_limit = 3;

  puts("Hello. Welcome to the guessing game!!!\n");
  while (guess != secret_number && guesses_took < guess_limit){
    puts("Guess a number: ");
    scanf("%d", &guess);
    guesses_took++;
  }

  if (guess == secret_number){
    printf("\nYou win! You took a total of %d guesses", guesses_took);
  } else if (guesses_took >= guess_limit){
    printf("\nYou lost!!! You have exceeded the limit of %d guesses", guess_limit);
  }
  
  
}