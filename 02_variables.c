// Creating variables and printing them in the console

#include <stdio.h>
#include <stdlib.h>

int main(){
  char characterName[] = "Nittin"; // The square brackets are there to tell the compiler that the variable will store a bunch of characters
  int characterAge = 18;

  printf("There was once an adult named %s\n", characterName);
  printf("He is exactly %i old\n", characterAge);

  characterAge = 30;
  printf("He really liked his own name %s\n", characterName);
  printf("He is enjoying in his ripe age %i\n", characterAge);

  return 1;
}