#include "ManaPotion.h"


ManaPotion::ManaPotion(char s): Location(s) 
{
  taken = false;
}

void ManaPotion::draw() {
  if (visited == true && taken == false) 
  {
    cout << symbol;
  }
  else if (taken == true) 
  {
    cout << " ";
  }
  else 
  {
    cout << ".";
  }
}

int ManaPotion::Visit(Player &p)
{
  if (!visited)
  {
    visited = true;
    p.mana = p.mana+10;
    cout << "You've found a mana potion. Your mana is now : " << p.mana << endl;
  }
  return 1;
}