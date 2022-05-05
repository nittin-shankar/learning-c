// A simple madlibs game. Run this program, it's pretty cool!!

#include <stdio.h>
#include <stdlib.h>

int main(){
  char color[20];
  char plural_noun[20];
  char celebrity[20];

  printf("Enter a color: ");
  scanf("%s", color);


  printf("Enter a plural noun: ");
  scanf("%s", plural_noun);

  printf("Enter your fav celebrity: ");
  // scanf("%s%s", celebrity_f, celebrity_l);
  fflush(stdin);
  fgets(celebrity, 100, stdin);

  
  
  printf("\nRoses are %s\n", color);
  printf("%s are blue\n", plural_noun);
  printf("I love %s\n", celebrity);
  
  return 0;
}