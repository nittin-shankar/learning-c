#include <stdio.h>

int main(){
  int index = 1;

  while (index <= 5){
    printf("%d\n", index);
    index++;
  }

  index = 6;

  do
  {
    printf("\n%d\n", index);
    index++;
  } while (index <= 5);
  
  
}
