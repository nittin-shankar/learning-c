// Exploring structs

#include <stdio.h>
#include <string.h>

struct Student{
  /* data */
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main(){
  struct Student student1;
  student1.age = 18;
  student1.gpa = 3.2;
  strcpy(student1.name, "Nittin Shankar");
  strcpy(student1.major, "Computer Science");

  struct Student student2;
  student1.age = 22;
  student1.gpa = 3.2;
  strcpy(student1.name, "Vicky");
  strcpy(student1.major, "Agricultural Engineering");

  printf("%s", student1.name);
  
  
}
