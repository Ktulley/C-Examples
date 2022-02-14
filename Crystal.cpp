#include "Crystal.h"

Crystal::Crystal(char s) : Location(s) 
{
  taken = false;
}

void Crystal::draw() 
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

int Crystal::Visit(Player &p) {
  if (visited == false ) {
    visited = true;
    cout << "You've found a crystal." << endl;
    p.Crystalo = true;
  }
  return 1;
}