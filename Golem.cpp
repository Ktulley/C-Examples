#include "Golem.h"
#include "Location.h"
#include "Player.h"


Golem::Golem(char s) : Location(s) 
{
  taken = false;
}

void Golem::draw() 
{
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

int Golem::Visit(Player &p) 
{
  if (visited == false)
  {
    visited = true;
    cout << "You've discovered an Ancient Golem. It seems lifeless but strong." << endl;
  }
  else
  {
    cout << "You've revisited the Ancient Golem.\n";
  }
  string input = "";
  while (input != "no") 
  {
    string sChoice = "blank";
    if (p.Pumpkino == false && p.Crystalo == false && p.mana <29)
    {
      cout << "You feel vastly unprepared best to come back later.\n";
      return 1;
    }
    else if (p.Pumpkino == true && p.Crystalo == false && p.mana < 29)
    {
      cout << "Armed with only a pumpkin, do you dare challenge the beast? (Y or N)";
      cin >> sChoice;
      if (sChoice == "Y" || sChoice == "y" )
      {
        cout << "\nYou hurdle your pumpkin too the Golem but it bounces off harmlessly. Embarrassed you leave.\n";
        return 1;
      }
      else 
      {
        cout << "\n\nYou leave.\n";
        return 1;
      }
    }
    else if (p.Pumpkino == false && p.Crystalo == true && p.mana < 29)
    {
      cout << "Armed with only a crystal, do you dare challenge the beast? (Y or N)";
      cin >> sChoice;
      if (sChoice == "Y" || sChoice == "y" )
      {
        cout << "\nYou hurdle your crystal too the Golem but it bounces off harmlessly. Embarrassed you leave.\n";
        return 1;
      }
      else 
      {
        cout << "\nYou leave.\n";
        return 1;
      }
    }
    else if (p.Pumpkino == false && p.Crystalo == false && p.mana > 29)
    {
      cout << "Armed with only a abundant mana, do you dare challenge the beast? (Y or N)";
      cin >> sChoice;
      if (sChoice == "Y" || sChoice == "y" )
      {
        cout << "\nYou hurdle your cast magic but it bounces off harmlessly. Embarrassed you leave.\n";
        return 1;
      }
      else 
      {
        cout << "\nYou leave.\n";
        return 1;
      }
    }
    else if (p.Pumpkino == true && p.Crystalo == true && p.mana < 29)
    {
      cout << "Armed with only a a pumpkin and a crystal, do you dare challenge the beast? (Y or N)";
      cin >> sChoice;
      if (sChoice == "Y" || sChoice == "y" )
      {
        cout << "\nYou place the crystal inside the pumpkin and attempt to raise a golem. Your mana reserves are not enough and you leave embarrassed.\n";
        return 1;
      }
      else 
      {
        cout << "\nYou leave.\n";
        return 1;
      }
    }
    else if (p.Pumpkino == true && p.Crystalo == false && p.mana > 29)
    {
      cout << "Armed with only a a pumpkin and abundant mana, do you dare challenge the beast? (Y or N)";
      cin >> sChoice;
      if (sChoice == "Y" || sChoice == "y" )
      {
        cout << "\nYou place the pumpkin and attempt to raise a golem. The pumpkin golems punches are too weak to damage the ancient golem, and reverts back to normal. You leave embarrassed.\n";
        return 1;
      }
      else 
      {
        cout << "\nYou leave.\n";
        return 1;
      }
    }
    else if (p.Pumpkino == false && p.Crystalo == true && p.mana > 29)
    {
      cout << "Armed with only a a crystal and abundant mana, do you dare challenge the beast? (Y or N)";
      cin >> sChoice;
      if (sChoice == "Y" || sChoice == "y" )
      {
        cout << "\nYou charge the crystal with your full mana and hurdle it at the beast. It bounces off harmlessly. You leave embarrassed.\n";
        return 1;
      }
      else 
      {
        cout << "\nYou leave.\n";
        return 1;
      }
    }
    else if (p.Pumpkino == true && p.Crystalo == true && p.mana > 29)
    {
      cout << "Armed to the teeth with an assortments of items and abilities, do you dare challenge the beast? (Y or N)";
      cin >> sChoice;
      if (sChoice == "Y" || sChoice == "y" )
      {
        cout << "\nYou place the crystal inside the pumpkin and attempt to raise a golem. Your mana reserves pour ample energy in and the pumpkins exterior hardens with the help of the crystal. The battle is swift and victory is yours. You claim the treasure the golem was guarding. \n\n\n Congratulations! Game cleared.";
        return 0;

      }
      else 
      {
        cout << "\nYou leave.\n";
        return 1;
      }
    }
  }
  return 1;
}
