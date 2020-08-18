//Both the functions controls the game

//This functions control the game while on the start menu
int gameStateControl(int state){
  //Checks if the user want to start the game
  if (state == 1){
    return 1;
  }
  else{
    //clear the screen and prints the start screen
    system("cls");
    printStart();
    return 0;
  }
}

//This function control the game while playing, and also ends the game
int gameStateControl(char letter, char word[50], int *endType){
  
  //compares if the letter guessed by the user is correct
  letterComp();

  //checks if the game ended
  //either the user losing, winning or quitting respectively

  if (liveCount() == 1||letterCount() == 1 || letter == '0')
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