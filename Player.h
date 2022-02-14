#ifndef PLAYER_H
#define PLAYER_H
#include <string> 
using namespace std;

class Player {

  private: 
    string pName;
    int pAge; 
    
  public:


   Player(string name = "InvalidPlayer", int age = 25, int Mana = 10) 
   {
    pName = name;
    pAge = age;
    Crystalo = false;
    Pumpkino = false;
    mana = Mana;
  }

  bool Crystalo;
  bool Pumpkino;
  int mana;

  string getPlayerName();
  int getPlayerAge();
  int getPlayerMana();
  void setPlayerName(string name);
  void setPlayerAge(int age);
  void setPlayerMana(int mana);
  
  void print();

};
#endif

