/* This file contain the main function, it controls the io and calls
the game control function*/

//Will probably use WordsAPI to characterize the type of word

#include <stdio.h>

int main(){
  
  //the variable endType controls if the user won, lose or quit the game
  //state controls when the program should leave the firt while
  int endType, state = 0;

  //the variable "letter" is the letter the user picked to test
  //genWord is the generated word, the user should gess
  //word contains the letters the user guessed, letters the user did not
  //guessed yet are represente by #, ex: orange -> or#n##
  char letter;
  char genWord[50], word[50];

  //calls the function that generates the word to be guessed
  generateWord(genWord);
  
  //this while keeps the user locked in the start screen, until he types 1
  while (gameStateControl(state) != 1)
  {
    scanf("%d", state);
  }
  
  // dowhile loop receives a letter to guess, and holds the user until the game
  //ends
  do
  {
    scanf("%d", letter);
  }while (gameStateControl(letter, word, &endType) != 1);
  
}