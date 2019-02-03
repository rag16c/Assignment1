/* 
File: CrazyRandomSword.cpp
Name: Riley Garrison

Created on February 3, 2019 at 6:07 AM
*/

#include "CrazyRandomSword.h"
#include <cstdlib>
#include <ctime>

double CrazyRandomSword::hit(double armor) {
  srand(time(NULL));
  int armorIgnore = rand()%(int)(armor/3 - 2) + 2;
  double damage = hitpoints - (armor - armorIgnore);
  if ( damage <= 0 )
    return 0;
  else 
    return damage;
  
}
