#include "Pumpkin.h"

using namespace std;

Pumpkin::Pumpkin(char s) : Location(s) 
{
  taken = false;
}

void Pumpkin::draw() 
{
  if (visited == true && taken == false) 
  {
    cout << symbol;
  }
  else if ( taken == true) 
  {
    cout << ' ';
  }
  else 
  {
    cout << '.';
  }
  
}

int Pumpkin::Visit(Player &p) {
  if (visited == false ) 
  {
    visited = true;
    cout << "You've found a Pumpkin." << endl;
    p.Pumpkino = true;
  }
  return 1;
}