#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

int Player::getPlayerAge() 
{
  return pAge;
}

string Player::getPlayerName() 
{
  return pName;
}

int Player::getPlayerMana() 
{
  return mana;
}

void Player::setPlayerAge(int age) 
{ 
  pAge = age;  
}

void Player::setPlayerName(string name) 
{
  pName = name;
}

void Player::setPlayerMana(int Mana) 
{ 
  mana = Mana;  
}


void Player::print() 
{
  cout << "(" << pName << "," << pAge << ")" << endl;
}