// Exploring how to read files in C
#include <stdio.h>

int main(){

  char line[255];

  FILE * file_pointer = fopen("friends.txt", "r");

  // Fgets reads only one line at a time. If we want the second line from a file, then we do the following:
  fgets(line, 255, file_pointer); 
  fgets(line, 255, file_pointer);

  printf("%s", line);

  fclose(file_pointer);

  return 10;
}