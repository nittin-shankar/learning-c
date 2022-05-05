// Exploring the if statement and creating max and min functions by myself

#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
  int result;
  if (num1 >= num2 && num1 >= num3){
    result = num1;
  } else if (num2 >= num1 && num2 >= num3 ){
    result = num2;
  } else {
    result = num3;
  }
  
  return result;
}

int min(int num1, int num2, int num3){
  int result;
  if (num1 <= num2 && num1 <= num3){
    result = num1;
  } else if (num2 <= num1 && num2 <= num3 ){
    result = num2;
  } else {
    result = num3;
  }


  
  return result;
}

int main(){
  printf("%d\n", max(4, 10, 4));
  printf("%d\n", max(14, 10, 5));
  printf("%d\n", max(14, 10, 15));
  printf("%d\n", max(0, 0, 0));
  return 0;
}