// Tries printing a floating number

#include <stdio.h>
#include <stdlib.h>

int main(){
  int even_numbers[] = {2, 4, 6, 9, 10};
  printf("Index 0: %d\n", even_numbers[0]);
  printf("Index 3: %d\n", even_numbers[3]);

  char varName[2] = {'f', 'a'};
  printf("%s\n", varName);
  
  even_numbers[3] = 8;
  printf("Index 3 after modifications: %d", even_numbers[3]);
  
  
  return 0;
}