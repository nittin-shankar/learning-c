// Creating a function that doesn't return anything

#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age){
  printf("Hello %s, You are %d\n", name, age);
}

int main(){
  sayHi("Nittin", 18);
  sayHi("Rashmi", 18);
  sayHi("Vicky", 22);

  return 0;
}