#include "Location.h"

using namespace std;

Location::Location(char s) {
  symbol = s;
  visited = false;
}



int Location::Visit(Player &p) {
  visited = true;
  return 1;
}

void Location::Draw() {
  if (visited) cout << symbol;
  else cout << '.';
}