// Exploring switch statements

#include <stdio.h>

int main(){
  puts("Enter your grade: ");

  char grade;
  scanf(" %c", &grade);

  switch (grade){
    case 'A':
      puts("\nYou did great!");
      break;
    
    case 'B':
      puts("\nYou did alright");
      break;

    case 'C':
      puts("\nYou did poorly");
      break;

    case 'D':
      puts("\nYou did very bad");
      break;

    case 'F':
      puts("\nYou failed!!");
      break;
  
  default:
    puts("\nHmm... invalid grade... Run this program again");
    break;
  }
  return 0;
}