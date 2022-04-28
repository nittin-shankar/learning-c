#include <stdio.h>
#include <stdlib.h>

int main(){
  
  /*
  Getting integers
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  printf("You are %d years old\n", age);
  */

 /*
  Getting decimal 
  double gpa;
  printf("Enter your gpa: ");
  scanf("%lf", &age);

  printf("Your gpa is %f", age);
  */


 /* 
 Getting a single string
  char name[50];
  printf("Enter you name: ");
  scanf("%s", name);

  printf("Hello, %s!", name);
 */
 
 /*
 Getting all the strings 
 */
  char name[20];
  printf("Enter your name: ");
  fgets(name, 20, stdin);
  printf("Your name is %s", name);


  return 0;
}