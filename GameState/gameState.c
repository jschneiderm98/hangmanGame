#include "../constants.h"
//Both the functions controls the game

//This functions control the game while on the start menu
int gameStateControl(int state){
  //Checks if the user want to start the game
  if (state == 1) addWord();
  else if (state == 2) return 2;
  else{
    system("cls");
    printStart();
    return 0;
  }
}

//This function control the game while playing, and also ends the game
int gameStateControl(char letter, char word[], char genWord[], int *endType){
  
  //compares if the letter guessed by the user is correct
  letterComp(letter, word[wordSize]);

  //checks if the game ended
  //either the user losing, winning or quitting respectively

  if (end() != 0)
  {
    printEnd();
    return 1;
  }
  else
  {
    printHangman();
    return 0;
  }
}