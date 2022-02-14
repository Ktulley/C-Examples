#ifndef CRYSTAL_H
#define CRYSTAL_H
#include <iostream>
#include "Location.h"
#include "Player.h"
using namespace std;

class Crystal : public Location {

protected:
  bool taken;

public:
  Crystal(char s);
  void draw();
  int Visit(Player &p) override;



};

#endif