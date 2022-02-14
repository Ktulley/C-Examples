#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include "Location.h"
#include "Crystal.h"
#include "Pumpkin.h"
#include "ManaPotion.h"
#include "Golem.h"

using namespace std;

class Game : public Location {
  private:
    Location ***world;
    Player p;
    int rows;
    int cols;
    int playerRow;
    int playerCol;

  public:
    
    
  Game() {
    rows = 0;
    cols = 0;
    playerRow = 0;
    playerCol = 0;
  }
  
  Game(int _rows, int _cols, int _playerRow, int _playerCol, Player _p) {
    rows = _rows;
    cols = _cols;
    playerRow = _playerRow;
    playerCol = _playerCol;
    p = _p;
  }
  
  void setUpGame();

  void playGame();

  void drawGame();

  ~Game() {
    delete world;
  }

  Game(string _fileName)
  {}
};
#endif