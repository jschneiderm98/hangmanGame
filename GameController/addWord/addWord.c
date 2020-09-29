#include <stdio.h>
#include <stdlib.h>

void addWord(char *word)
{
  FILE *fwords, *fsize;
  int size;
  //open size.txt to see what was the previous size
  //open words.txt to include new world
  fsize = fopen("../../size.txt", "r");
  fwords = fopen("../../words.txt", "a");
  //checks to see if both were opened
  if (fwords == NULL && fsize == NULL)
  {
    printf("arquivo não abriu");
    exit(-1);
  }
  //reads the previous size, and incremente the extra add word and closes the file
  fscanf(fsize, "%d", size);
  fclose(fsize);
  size++;
  //reopen the size file to update new size, in write mode now
  fsize = fopen("../../size.txt", "w");
  if (fsize == NULL)
  {
    printf("arquivo não abriu");
    exit(-1);
  }
  // print the new size and new word in files
  fprintf(fsize, "%d", size);
  fprintf(fwords, "%s", word);
  //closes both files
  fclose(fwords);
  fclose(fsize);
}