#ifndef GOLEM_H
#define GOLEM_H
#include <iostream>
#include "Location.h"
#include "Player.h"
using namespace std;

class Golem : public Location {
  
  private:
    bool taken;

  public:
    Golem(char s);
    void draw();
    int Visit(Player &p) override;

};
#endif