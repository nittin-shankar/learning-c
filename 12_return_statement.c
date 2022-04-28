// Creating function that returns something

#include <stdio.h>
#include <stdlib.h>

double cube(double num){
  double result = num * num * num;
  return result;
}

int main(){
  printf("Answer: %f", cube(2));
  return 0;
}