// Exploring the concept of memory addresses

#include <stdio.h>

int main(){
  // When we create a variable, the value of it gets stored in a physical address. The physical address is called pointer
  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  age = 18;
  

  // We can create a pointer variable just like we can create an integer variable
  
  double *pGpa = &gpa;
  char *pGrade = &grade;
  int * pAge = &age;

  // The %p modifier is to format pointers
  printf("memory address of age: %p\n", pAge);
  printf("memory address of gpa: %p\n", pGpa);

  // Grabbing a pice of data from a memory address is called dereferencing a pointer. Below is an example of dereferencing a pointer:
  printf("\ndeferenced grade pointer: %c\n", *pGrade);

  return 10;
}