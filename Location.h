#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Location {

protected:
  bool visited; 
  char symbol; 

public:

  int mana = 10;

  void visitedSet(bool visted);

  bool visitedGet();

  void symbolSet(char symbol);

  char symbolGet();
  
  Location(char s = ' ');

  virtual int Visit(Player &p);

  virtual void Draw();

  
};
#endif