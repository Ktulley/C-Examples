#ifndef PUMPKIN_H
#define PUMPKIN_H
#include <iostream>
#include <string>
#include "Player.h"
#include "Location.h"
using namespace std;

class Pumpkin : public Location {

protected:
  bool taken;

public:
  
  Pumpkin(char s);
  void draw();
  int Visit(Player &p) override;

};
#endif