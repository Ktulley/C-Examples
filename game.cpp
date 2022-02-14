#include "game.h"
#include "Player.h"
#include <stdlib.h>
#include <fstream>


void Game::setUpGame() {
  
  world = new Location**[rows];

  for ( int i = 0; i < rows; i++ ) 
  {
    world[i] = new Location*[cols];
    for ( int j = 0; j < cols; j++ ) 
    {
      world[i][j] = 0;
    }
  }

  string fileName;
  cout << "What map do you want to load? (Make sure to include .txt)\n" ;
  cin >> fileName;
  
  ifstream mapFile;
  mapFile.open(fileName);
  mapFile >> rows >> cols;

  string locations[rows][cols];
  for ( int i = 0; i < rows; i++ ) 
  {
    for ( int j = 0; j < cols; j++ ) 
    {
      mapFile >> locations[i][j];
    }
  }

  for ( int i = 0; i < rows; i++ ) 
  {
    for ( int j = 0; j < cols; j++ ) 
    {
      string locName = locations[i][j];
      if (locName == "G")
      {
        world[i][j] = new Golem('G');
      }
      else if (locName == "P")
      {
        world[i][j] = new Pumpkin('P');
      }
      else if (locName == "M")
      {
        world[i][j] = new ManaPotion('M');
      }
      else if (locName == "C")
      {
        world[i][j] = new Crystal('C');
      }
      else
      {
        world[i][j] = new Location();
      }
    }
  world[playerRow][playerCol]->Visit(p);
  }
}


void Game::drawGame()
{
  for ( int i = 0; i < rows; i++ ) 
  {
    for ( int j = 0; j < cols; j++ ) 
    {
      Location *tile = world[i][j];
      if (i == playerRow && j == playerCol)
        cout << 'P';
      else
        tile->Draw();
    }
    cout << endl;
  }

} 


void Game::playGame()
{
  setUpGame(); 
  bool isPlaying = true;

  while (isPlaying) 
  {
    drawGame();

    bool validMove = true;
    
    while (validMove) 
    {
      validMove = true;
      char PlayerMove;
      cout << "Which direction do you want to move? (W, A, S, D)" << endl;
      cin >> PlayerMove;

      if (PlayerMove == 'W' || PlayerMove == 'w') 
      {
        if (playerRow == 0) validMove = false;
        else 
        {
          playerRow--;
          break;
        }
      }
      else if (PlayerMove == 'S' || PlayerMove == 's') 
      {
        if (playerRow == rows - 1) validMove = false;
        else {
          playerRow++;
          break;
        }
      }
      if (PlayerMove == 'A' || PlayerMove == 'a') {
        if (playerCol == 0) validMove = false;
        else {
          playerCol--;
          break;
        }
      }
      else if (PlayerMove == 'D' || PlayerMove == 'd') {
        if (playerCol == cols - 1) validMove = false;
        else {
          playerCol++;
          break;
        }
      }
      else {
        cout << "Not a valid input." << endl;
        validMove = true;
      }
    }


    int result = world[playerRow][playerCol]->Visit(p);
    if (result == 0)
    {
      break;
    }

    string Continue;
    cout << "Do you want to keep exploring the game world? (Type no to quit)" << endl;
    cin >> Continue; 
    if (Continue == "no")
    {
      isPlaying = false;
    } 
  }
}