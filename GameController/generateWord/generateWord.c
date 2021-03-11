#include "../../constants.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateWord(char *word){
  FILE *fwords, *fsize;
  char temp[wordSize];
  int size, random;
  srand(time(NULL));

  fwords = fopen("../../words.txt", "r");
  fsize = fopen("../../size.txt", "r");
  if (fwords == NULL && fsize == NULL)
  {
    printf("arquivo não abriu");
    exit(-1);
  }
  fscanf(fsize, "%d", size);
  random = ((rand() % (size)) + 1);
  for(int i = 0; i < random; i++){
    fscanf("%s", word);
  }
  fclose(fwords);
  fclose(fsize);
}