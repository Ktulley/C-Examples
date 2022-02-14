#ifndef MANAPOTION_H
#define MANAPOTION_H
#include "Location.h"
#include "Player.h"
#include "game.h"
using namespace std;

class ManaPotion : public Location {

  private:
    bool taken;

  public:

    ManaPotion(char s);

    void draw();

    int Visit(Player&p) override;

};

#endif