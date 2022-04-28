// Tries printing a floating number

#include <stdio.h>
#include <stdlib.h>

int main(){
  char color[20];
  char plural_noun[20];
  char celebrity_f[20];
  char celebrity_l[20];

  printf("Enter a color: ");
  scanf("%s", color);

  printf("Enter a plural noun: ");
  scanf("%s", plural_noun);

  printf("Enter your fav celebrity: ");
  fgets(celebrity_f, 20, stdin);

  
  
  printf("\nRoses are %s\n", color);
  printf("%s are blue\n", plural_noun);
  printf("I love %s %s\n", celebrity_f, celebrity_l);
  
  return 0;
}