// An exploration of if conditions. A simple calculator that can do the primary mathematical operations
#include <stdio.h>

int main(){
  double num1;
  double num2;
  char operator;

  puts("Enter a number: ");
  scanf("%lf", &num1);

  puts("Please enter the operator to calculate: ");
  scanf(" %c", &operator);

  puts("Enter another number: ");
  scanf("%lf", &num2);

  if (operator == '+'){
    printf("\n%f", num1 + num2);
  } else if(operator == '-'){
    printf("\n%f", num1 - num2);
  } else if(operator == '*'){
    printf("\n%f", num1 * num2);
  } else if(operator == '/'){
    printf("\n%f", num1 / num2);
  } else {
    puts("\nInvalid operator");
  }
  
  

  return 0;
}