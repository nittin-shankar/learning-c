// Exploring how to write files in C
#include <stdio.h>

int main(){
  // FILE can be considered a data type and we are creating a pointer variable for it


  /* The first argument is the file name and the second argument is going to be a file mode. File mode is basically telling what do we want C to do once it has opened. Essentialy, there are 3 modes:
  1. 'w' - stands for write. Normally overrides the file if already created
  2. 'r' - stands for read
  3. 'a' - stands for append. Appends to the file that's already created
  */
  FILE * file_pointer = fopen("friends.txt", "w");

  // Works a lot like printf but this function allows us to write contents to a file
  fprintf(file_pointer, "0.Treshai\n1. Rashmi\n2. Vicky\n3");

  // Anytime we are opening a file, we should also call the fclose() function. It'll the remove the file from the memory.
  fclose(file_pointer);

  return 10;
}