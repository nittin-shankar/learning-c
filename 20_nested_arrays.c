// Trying oout creating nested arrays and looping over them
#include <stdio.h>

int main(){
  int nums[3][2] = {
    {1, 2},
    {3, 4}, 
    {5, 6}
  };

  printf("%d\n", nums[0][1]);

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
      printf("\n%d", nums[i][j]);
    }  
  }

  return 0;
}